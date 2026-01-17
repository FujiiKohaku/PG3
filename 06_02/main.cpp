#include <condition_variable>
#include <fstream>
#include <iostream>
#include <mutex>
#include <sstream>
#include <thread>
#include <vector>

// 共有データ
std::vector<std::vector<int>> mapData;
std::mutex mtx;
std::condition_variable cv;
bool loaded = false;
bool exitFlag = false;

// バックグラウンド：CSV読み込み
void LoadCSV()
{
    std::ifstream file("map.csv");
    std::string line;

    std::vector<std::vector<int>> temp;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string cell;
        std::vector<int> row;

        while (std::getline(ss, cell, ',')) {
            row.push_back(std::stoi(cell));
        }
        temp.push_back(row);
    }

    {
        std::lock_guard<std::mutex> lock(mtx);
        mapData = temp;
        loaded = true;
    }

    cv.notify_one(); // 読み込み完了を通知
}

int main()
{
    // CSVロードを別スレッドで開始
    std::thread loader(LoadCSV);

    // メインループ
    while (!exitFlag) {

        // ロード完了を待つ（完了済みなら待たない）
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [] { return loaded; });

        // マップ表示（
        std::cout << "=== MAP ===" << std::endl;
        for (const auto& row : mapData) {
            for (int v : row) {
                std::cout << v << " ";
            }
            std::cout << std::endl;
        }

        exitFlag = true; // 今回は1回表示したら終了
    }

    // 終了時にスレッドを止める
    loader.join();
    return 0;
}

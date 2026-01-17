#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
std::condition_variable cv;
int turn = 1;

void PrintThread(int myTurn)
{
    std::unique_lock<std::mutex> lock(mtx);

    cv.wait(lock, [&]() { return turn == myTurn; });

    std::cout << "thread " << myTurn << std::endl;

    turn++;
    cv.notify_all();
}

int main()
{
    std::thread t1(PrintThread, 1);
    std::thread t2(PrintThread, 2);
    std::thread t3(PrintThread, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}

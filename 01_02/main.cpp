#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector> //これでベクター使えるって（コンテナのこと配列の強化版）
using namespace std; // stdを省略したいんすよー

bool compareStudent(const string& a, const string& b)
{
    int yearA = stoi(a.substr(1, 3)); // 文字列.substr(開始位置, 取り出す文字数)
    int yearB = stoi(b.substr(1, 3));
    if (yearA != yearB) { // なぜif文があるかそれは学年を先にするため
        return yearA < yearB;
    }

    // gの次から4文字を切り出して数値化
    int idA = stoi(a.substr(5, 4));
    int idB = stoi(b.substr(5, 4));

    return idA < idB;
}

int main(int argc, char const* argv[])
{

    vector<int> a = { -10, 321, -3, 50, 1 };

    // 課題

    vector<string> students = {
        "k024g1017@g.neec.ac.jp",
        "k024g0033@g.neec.ac.jp",
        "k024g0057@g.neec.ac.jp",
        "k024g0020@g.neec.ac.jp",
        "k024g0109@g.neec.ac.jp",
        "k024g1031@g.neec.ac.jp",
        "k024g0004@g.neec.ac.jp",
        "k024g0027@g.neec.ac.jp",
        "k024g0058@g.neec.ac.jp",
        "k022g0113@g.neec.ac.jp",
        "k024g0007@g.neec.ac.jp",
        "k024g0083@g.neec.ac.jp",
        "k024g0110@g.neec.ac.jp",
        "k024g0066@g.neec.ac.jp",
        "k023g0029@g.neec.ac.jp",
        "k024g1030@g.neec.ac.jp",
        "k024g0106@g.neec.ac.jp",
        "k024g0089@g.neec.ac.jp",
        "k024g0101@g.neec.ac.jp",
        "k024g0035@g.neec.ac.jp",
        "k024g1025@g.neec.ac.jp",
        "k024g0059@g.neec.ac.jp",
        "k024g0006@g.neec.ac.jp",
        "k023g0122@g.neec.ac.jp",
        "k024g0028@g.neec.ac.jp",
        "k024g1024@g.neec.ac.jp",
        "k024g0108@g.neec.ac.jp",
        "k024g0061@g.neec.ac.jp",
        "k024g0104@g.neec.ac.jp",
        "k024g0038@g.neec.ac.jp",
        "k024g0032@g.neec.ac.jp",
        "k024g0026@g.neec.ac.jp",
        "k024g0001@g.neec.ac.jp",
        "k024g0009@g.neec.ac.jp",
        "k024g0112@g.neec.ac.jp",
        "k024g0011@g.neec.ac.jp",
        "k024g0085@g.neec.ac.jp",
        "k024g0111@g.neec.ac.jp",
        "k024g0045@g.neec.ac.jp",
        "k024g0103@g.neec.ac.jp",
        "k024g1002@g.neec.ac.jp",
        "k024g0078@g.neec.ac.jp",
        "k024g0044@g.neec.ac.jp",
        "k024g0008@g.neec.ac.jp",
        "k024g0075@g.neec.ac.jp",
        "k024g0091@g.neec.ac.jp",
        "k024g0064@g.neec.ac.jp",
        "k024g0051@g.neec.ac.jp",
        "k024g0093@g.neec.ac.jp",
        "k024g0024@g.neec.ac.jp"
    };

    // ===== 学籍番号順にソート =====
    sort(students.begin(), students.end(), compareStudent);

    cout << "並びます" << endl;

    for (int i = 0; i < students.size(); i++) {

        cout << students[i] << endl;
    }

    return 0;
}
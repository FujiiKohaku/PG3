#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
//#include <list> //双方向リストを使うためにはこれをインクルードしろ！
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
    //==================
    // 整列(sort)
    //==================
    // int型の動的配列a (要素数5)
    vector<int> a = { -10, 321, -3, 50, 1 };

    //

    // cout << "全要素を表示します" << endl;
    //// 全要素を表示
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << endl;
    // }

    //// 昇順に並び替え
    // sort(a.begin(), a.end()); // sort(先頭要素のイテレータ,末尾要素のイテレーター)
    //// sortは小さい順番に並び替えてくれる関数

    // cout << "全要素を表示します" << endl;
    //// 全要素を表示
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << endl;
    // }

    //==================
    // 探索(find)
    //==================
    //// 探索したいvector用のイテレーター
    // vector<int>::iterator it;
    //// 指定した値を探索する
    // it = find(a.begin(), a.end(), -3); // この関数は見つけたらその数字を返却し見つからなかったら末尾の次を返却
    //// 指定した値が存在すれば
    // if (it != a.end()) { // 末尾の次と一致しなければif文が通る
    //     // ここに来るのは「見つかったとき」だけ
    //     cout << *it << endl; // 見つけた要素を表示
    // }

    //// 指定した値を探索する
    // it = find(a.begin(), a.end(), 99999); // これだと見つからないよ！
    // if (it != a.end()) {

    //    cout << *it << endl;
    //}

    ////======================
    //// 要素数を得る
    ////======================
    // bool b_array[] = { true, false, true, true };

    // size_t n_count = count(b_array, b_array + (sizeof(b_array)), true);
    //// b_arraayこれは先頭要素　　　　b_array+ (sizeof(b_array)),これ末尾のやつ
    // cout << n_count << endl;

    ////======================
    //// 逆順にする(reverse)
    ////======================
    // 今の並びを逆にしてしまうぞ
    //  reverse(a.begin(), a.end());

    // auto dump = [](auto a) { // ラムダ式というらしい
    //     for (auto i : a) {
    //         cout << i << "";
    //     }
    //     cout << endl;
    // };

    // array<int, 5> a1 { 1, 2, 3, 4, 5 }; // 固定長配列なので要素数をあらかじめ書かないといけないらしい
    // array<int, 5> a2 { 1, 2, 3, 4, 5 };

    // replace(a1.begin(), a1.end(), 3, 0); // 配列a1の３となっている要素を０に置き換え
    // replace(a2.begin(), a2.end(), 2, 0); // 配列a2の2となっている要素を０に置き換え
    // dump(a1);
    // dump(a2);

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
#include <iostream>
#include <list> //双方向リストを使うためにはこれをインクルードしろ！
#include <stdlib.h>
#include <vector> //これでベクター使えるって（コンテナのこと配列の強化版）
using namespace std; // stdを省略したいんすよー

int main()
{

    ////===============
    //// 要素の読み書き
    ////===============
    //// 配列と全くおんなじや
    //// float型の可変長配列ｃ(要素数:3)

    // vector<float> c = { 0.0f, 1.0f, 2.0f };

    // printf("添え字１の要素を表示\n");

    //// 添え字１の要素を表示
    // printf("%f\n", c[1]);

    //// 添え字１の要素に-1.5を代入

    // c[1] = -1.5f;
    // printf("添え字１の要素に-1.5を代入した値を表示\n");
    //// 添え字１の要素を表示

    // printf("%f", c[1]);

    ////===============
    //// 要素数の変更
    ////===============

    //// int型の可変長配列ｄ（要素数:0）
    // vector<int> d;

    //// 要素数を10個に変更(0で初期化される)
    // d.resize(10);

    //// 要素数を取得

    // int size = d.size();
    // printf("\n要素数を１０個に変更して全部０にした");
    //// 全要素を表示
    // for (int i = 0; i < size; i++) {

    //    printf("%d\n", d[i]);
    //}
    ////===========================
    //// イテレータでvectorの使用方法
    //// ==========================

    // cout << "イテレータを使用したvectorの使用方法" << endl;
    //// int型の可変長配列e(要素数:3)
    // vector<int> e = { 1, 2, 3 };

    //// int肩の可変長配列用のイテレータ
    // vector<int>::iterator it; // イテレータの宣言

    //// eの戦闘要素を指す
    // it = e.begin();

    //// itが指している要素を表示
    // cout << *it << endl;

    //// 次の要素に移動
    // it++;

    //// itが指している要素を表示
    // cout << *it << endl;

    ////============================
    //// イテレータで全要素を順に読み書き
    ////============================
    // cout << "イテレータで全要素を順に読み書き" << endl;

    //// string型の可変長配列f(要素数:3)
    // vector<string> f = { "ローソン", "ファミマ", "セブン" };

    //// 全要素を純にたどる
    // for (vector<string>::iterator it_f = f.begin(); it_f != f.end(); it_f++) {

    //    // it_fが指している要素を表示
    //    cout << *it_f << endl;
    //}

    ////=====================
    //// 要素の削除
    ////=====================
    // cout << "要素の削除" << endl;
    //// int型の可変長配列　g (要素数:3)
    // vector<int> g = { 1, 2, 3 };
    //// 添え字１の要素を削除{1,3}
    // g.erase(g.begin() + 1);
    //// 末尾の要素を削除
    // g.pop_back(); // これは末尾しか消せない

    // list<int> lst_demo(33, 4); // 要素数33,全ての要素を４で初期化
    // list<int> lst; // ただのリスト

    //// std::list<int>::iterator itr; // イテレータ
    //// itr = lst.begin(); // 最初の要素を指すイテレータ
    //// itr = lst.end(); // 最後の要素を指すイテレータ―
    //// itr--; // 最後のからひとつ前を指すイテレータ―
    //// itr--; // 最後のからふたつ前を指すイテレータ―

    ////=======================
    //// 値の参照２
    ////=======================
    // list<int> lst2(10, 2);
    // for (auto itr2 = lst2.begin(); itr2 != lst2.end(); ++itr2) {
    //     cout << *itr2 << endl;
    // }

    ////=================
    //// 値の代入
    ////=================

    // cout << "値の代入" << endl;

    // list<int> lst3 { 1, 2, 3 };
    // auto itr3 = lst3.begin(); // 0番目の要素を指すイテレータ―
    // cout << *itr3 << endl;
    //*itr3 = 9;
    // cout << *itr3 << endl;
    // itr3++; // 要素をプラス横にずれる
    //*itr3 = 10; // 1番目の要素を10に変更
    // cout << *itr3 << endl; // itr3は１番目の要素を指しているので10を表示

    ////=================
    //// 要素の追加
    ////=================
    // cout << "要素の追加" << endl;
    // list<int> lst4;
    // lst4.push_front(114); // 前に値を追加する場合は.push_frontを使用する

    // lst4.push_back(514); // 後ろに値を追加する場合は.push_backを使用する
    // cout << "戦闘に114末尾に514を入れたリストをfor文で回して表示しました" << endl;
    // for (auto itr4 = lst4.begin(); itr4 != lst4.end(); ++itr4) {

    //    cout << *itr4 << endl;
    //}

    ////===================
    //// 任意の位置に要素を追加
    ////===================
    // cout << "任意の位置に要素を追加(3の前に0を挿入する)" << endl;

    // list<int> lst5 { 1, 3, 5, 7, 10 };

    // for (list<int>::iterator itr5 = lst5.begin(); itr5 != lst5.end(); ++itr5) {
    //     if (*itr5 == 3) {
    //         itr5 = lst5.insert(itr5, 0); // ここはむずい
    //         ++itr5;
    //     }
    // }

    // for (list<int>::iterator itr5 = lst5.begin(); itr5 != lst5.end(); ++itr5) {
    //     cout << *itr5 << endl;
    // }

    list<string> stations = {
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno",
        "Uguisudani", "Nippori", "Tabata", "Komagome",
        "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba",
        "Shin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
        "Ebisu", "Meguro", "Gotanda", "Osaki", "Shinagawa",
        "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
    };

    cout << "1970年" << endl;
    for (const auto& s : stations) {
        cout << s << endl;
    }

    cout << "=============================" << endl;
    cout << "2019年" << endl;

    for (list<string>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
        if (*itr == "Tabata") {

            itr = stations.insert(itr, "Nishi-Nippori");
            ++itr;
        }
    }

    for (const auto& s : stations) {
        cout << s << endl;
    }

    cout << "=============================" << endl;
    cout << "2022年" << endl;
    for (list<string>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
        if (*itr == "Tamachi") {

            itr = stations.insert(itr, "Takanawa GateWay");
            ++itr;
        }
    }

    for (const auto& s : stations) {
        cout << s << endl;
    }
    return 0;
}
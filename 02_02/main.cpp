#include <iostream>
using namespace std;

// 一般的な賃金（時給1226円）
int NormalWage(int hours)
{
    return 1226 * hours;
}

// 再帰的な賃金（最初100円、次から前の2倍＋50円）
int RecursiveWage(int hour)
{
    if (hour == 1) {
        return 100; // 最初の1時間
    }
    return RecursiveWage(hour - 1) * 2 + 50; // 次の時間の計算
}

// 再帰的な賃金を「合計」で求める
int RecursiveTotal(int hours)
{
    if (hours == 1) {
        return 100;
    }
    return RecursiveTotal(hours - 1) + RecursiveWage(hours);
}

int main()
{
    int hours;
    cout << "働く時間を入力してください> ";
    cin >> hours;

    int normal = NormalWage(hours);
    int recursive = RecursiveTotal(hours);

    cout << "-------------------------------\n";
    cout << "一般的な賃金 : " << normal << "円\n";
    cout << "再帰的な賃金 : " << recursive << "円\n";

    if (recursive > normal) {
        cout << "→ 再帰的な賃金の方が高い！\n";
    } else if (recursive < normal) {
        cout << "→ 一般的な賃金の方が高い！\n";
    } else {
        cout << "→ どちらも同じ！\n";
    }

    return 0;
}

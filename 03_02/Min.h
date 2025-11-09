#pragma once
#include <iostream>
#include <typeinfo>

// クラステンプレート宣言と定義
template <typename T1, typename T2>
class MinClass {
public:
    // コンストラクタ
    MinClass(T1 a, T2 b);

    // 2つの値を比べて小さい方を返す
    auto Min();

    // 結果を出力する関数
    void Show();

private:
    T1 a_;
    T2 b_;
};

// ===== テンプレートの関数定義はヘッダに書く必要がある =====

// コンストラクタ（普通の書き方）
template <typename T1, typename T2>
MinClass<T1, T2>::MinClass(T1 a, T2 b)
{
    a_ = a;
    b_ = b;
}


// Min関数
template <typename T1, typename T2>
auto MinClass<T1, T2>::Min()
{
    return (a_ < b_) ? a_ : b_;
}

// Show関数
template <typename T1, typename T2>
void MinClass<T1, T2>::Show()
{
    std::cout << "Min = " << Min() << std::endl;
}

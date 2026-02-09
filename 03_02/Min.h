#pragma once
#include <iostream>

template <typename T1, typename T2>
T1 Min(T1 a, T2 b)
{
    if (a < b) {
        return a;
    } else {
        return static_cast<T1>(b);
    }
}

// クラステンプレート
template <typename T1, typename T2>
class MinClass {
public:
    MinClass(T1 a, T2 b);

    T1 MinValue();
    void Show();

private:
    T1 a_;
    T2 b_;
};

template <typename T1, typename T2>
MinClass<T1, T2>::MinClass(T1 a, T2 b)
{
    a_ = a;
    b_ = b;
}

template <typename T1, typename T2>
T1 MinClass<T1, T2>::MinValue()
{
    if (a_ < b_) {
        return a_;
    } else {
        return static_cast<T1>(b_);
    }
}

template <typename T1, typename T2>
void MinClass<T1, T2>::Show()
{
    std::cout << "Min = " << MinValue() << std::endl;
}

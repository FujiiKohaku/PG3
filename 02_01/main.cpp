#include <iostream>
#include <stdio.h>
#include <string>

template <typename Type>
Type Min(Type a, Type b)
{
    // もしaがbより小さければaを返す
    if (a < b) {
        std::cout << a << std::endl;
        return a;
    } else {

        std::cout << b << std::endl;
        return b;
    }
}

// template <typename Type>
// Type Min(Type a, Type b)
//{
//     return (a < b) ? a : b;
// }


int main()
{
    // int
    int num1 = 100;

    int num2 = 20;

    Min(num1, num2); // int型で呼び出し

    // float
    float num3 = 1.5f;

    float num4 = 2.5f;

    Min(num3, num4); // float型で呼び出し

    // doble

    double num5 = 1.234;

    double num6 = 2.345;

    Min(num5, num6); // double型で呼び出し

    return 0;
}
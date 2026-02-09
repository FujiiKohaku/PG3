#include "Min.h"

int main()
{
    MinClass<int, int> obj1(10, 20);
    MinClass<int, float> obj2(10, 15.5f);
    MinClass<int, double> obj3(10, 8.2);
    MinClass<float, float> obj4(3.3f, 9.1f);
    MinClass<float, double> obj5(7.5f, 7.4);
    MinClass<double, double> obj6(12.5, 15.0);

    //  要件どおり Min() を直接呼ぶ
    std::cout << Min(10, 20) << std::endl;
    std::cout << Min(10, 15.5f) << std::endl;
    std::cout << Min(10, 8.2) << std::endl;

    obj1.Show();
    obj2.Show();
    obj3.Show();
    obj4.Show();
    obj5.Show();
    obj6.Show();

    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

// 使用例
void printhelloWorld(void)
{
    printf("Helloworld\n");
}

int main(void)
{
    void (*pfunc)();

    printf("main=%p\n", main);

    return 0;
}

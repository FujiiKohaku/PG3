#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

// 使用例
void printhelloWorld(void)
{
    printf("Helloworld\n");
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

typedef int (*newType)(int a);

int twice(int a)
{
    return a * 2;
}

int triple(int a)
{
    return a * 3;
}

typedef void (*PFunc)(int*);

// コールバック関数
void DispResult(int* s)
{
    printf("%d秒待って実行されたよ\n", *s);
}

void SetTimeout(PFunc p, int second)
{
    Sleep(second * 1000);

    p(&second);
}

// 確認課題
void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess)
{
    printf("サイコロを振っています\n");
    Sleep(delayMs);
    fn(roll, userGuess);
}
void ShowResult(int roll, int userGuess)
{
    printf("サイコロの出目は %d\n", roll);

    int isOdd = roll % 2; // 奇数なら1, 偶数なら0

    if (isOdd == userGuess) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }
}

int main(void)
{
#pragma region 練習
    // void (*pfunc)();
    ////関数のアドレスを入れている
    // pfunc = printhelloWorld;
    // printf("PrintHelloWorldのアドレス= %p\n", printhelloWorld);
    // printf("pFuncの内容= %p\n", pfunc);

    // int l = 114;
    // int h = 514;

    // int (*calc)(int, int);

    // calc = add;
    // printf("%d\n", calc(l, h));
    // calc = sub;
    // printf("%d\n", calc(l, h));

    // newType calc;

    // int h = 4;

    // calc = &twice;
    // printf("%d\n", calc(h));
    // calc = &triple;
    // printf("%d\n", calc(h));

    // printf("start\n");

    // PFunc p;

    // p = DispResult;
    // SetTimeout(p, 5);

#pragma endregion
    srand((unsigned int)time(NULL)); // 乱数の種設定

    int userGuess = 0;
    printf("奇数（半）なら1、偶数（丁）なら0を入力してください：");
    scanf_s("%d", &userGuess);

    int roll = rand() % 6 + 1; // サイコロ（1〜6）

    //遅れてやってくる
    DelayReveal(ShowResult, 1000, roll, userGuess);
    return 0;
}

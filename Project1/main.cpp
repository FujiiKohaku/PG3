#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main()
{
    // 乱数種まき
    srand((unsigned int)time(NULL));

    int userGuess = 0;
    printf("奇数（半）なら1、偶数（丁）なら0を入力してください");
    scanf_s("%d", &userGuess);

    int roll = rand() % 6 + 1;

    auto showResult = [](int roll, int userGuess) {
        printf("サイコロの出目は %d\n", roll);

        int isOdd = roll % 2; // 奇数なら1, 偶数なら0
        if (isOdd == userGuess) {
            printf("正解\n");
        } else {
            printf("不正解\n");
        }
    };

    auto delayReveal = [&](void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess) { 
        printf("サイコロを振っています\n");
        Sleep(delayMs);
        fn(roll, userGuess);
    };

    delayReveal(showResult, 3000, roll, userGuess);

    return 0;
}

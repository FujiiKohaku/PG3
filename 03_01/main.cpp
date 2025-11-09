#include "Enemy.h"

int main()
{
    Enemy enemy;

    // 3回呼ぶと3フェーズ進む
    for (int i = 0; i < 3; i++) {
        enemy.Update();
    }
}

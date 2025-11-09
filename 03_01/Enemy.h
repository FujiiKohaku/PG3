#pragma once
#include <iostream>

class Enemy {
public:
    using StateFunc = void (Enemy::*)(); // メンバ関数ポインタ型

    Enemy();
    void Update();

private:
    // 各フェーズの関数
    void Approach(); // 接近
    void Attack(); // 射撃
    void Escape(); // 離脱

    // 現在のフェーズ番号
    int phaseIndex_ = 0;

    // フェーズ関数テーブル
    static StateFunc phaseTable_[3];
};

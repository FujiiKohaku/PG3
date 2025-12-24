#pragma once
class Enemy {
    // 基底クラス
public:
    virtual ~Enemy();
    virtual void Attack() = 0;
};

#pragma once
class Enemy {
    // 基底クラス
public:
    Enemy();
    ~Enemy();

    virtual void Attack()=0;

protected:
};

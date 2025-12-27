#include "Enemy.h"
#include "Player.h"

// ① フェーズの関数テーブル定義
Enemy::StateFunc Enemy::phaseTable_[] = {
    &Enemy::Approach, // 接近
    &Enemy::Attack, // 射撃
    &Enemy::Escape // 離脱
};

// コンストラクタ
Enemy::Enemy()
{
    phaseIndex_ = 0;
}

Enemy::~Enemy()
{
}
// Update関数
void Enemy::Update()
{
    
    (this->*phaseTable_[phaseIndex_])();

   
    if (phaseIndex_ < 2) {
        phaseIndex_++;
    }
}


// 各フェーズの関数
void Enemy::Approach()
{
    std::cout << "敵は接近している！" << std::endl;
}

void Enemy::Attack()
{
    std::cout << "敵は射撃している！" << std::endl;
}

void Enemy::Escape()
{
    std::cout << "敵は離脱した！" << std::endl;
}

#include "Player.h"

void Player::Initialize()
{
    speed_ = 5.0f;

}
void Player::Update()
{
}
void Player::Draw()
{
    Novice::DrawBox(static_cast<int>(posX_), static_cast<int>(posY_), 30, 30, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
    posX_ += speed_;
}
void Player::MoveLeft()
{
    posX_ -= speed_;
}

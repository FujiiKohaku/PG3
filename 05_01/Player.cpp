#include "Player.h"

void Player::Initialize()
{
    posx_ = 640.0f;
    posy_ = 360.0f;
    speed_ = 5.0f;
}
void Player::Update()
{
}
void Player::MoveLeft()
{
    posx_ -= speed_;
}
void Player::MoveRight()
{
    posx_ += speed_;
}
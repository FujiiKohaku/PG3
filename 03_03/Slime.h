#pragma once
#include "Enemy.h"
class Slime : public Enemy {

public:
    Slime() = default;
    ~Slime() = default;

    void Attack() override;

private:
};

#pragma once
#include "Enemy.h"
class Bone : public Enemy {

public:
    Bone()=default;
    ~Bone()=default;
    void Attack() override;
};

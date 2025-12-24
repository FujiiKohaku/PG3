#pragma once
#include "Enemy.h"
class Bone : public Enemy {

public:
    Bone();
    ~Bone();
    void Attack() override;
};

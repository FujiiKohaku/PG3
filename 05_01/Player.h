#pragma once
#include <Novice.h>

class Player {
public:
 

    void Initialize();
    void Update();
    void Draw();

    void MoveRight();
    void MoveLeft();

private:
    float speed_;
    float posX_;
    float posY_;
};
#pragma once
class Player {
private:
    float posx_;
    float posy_;
    float speed_;

public:
 
    void Initialize();
    void Update();
    void Draw();

    void MoveLeft();
    void MoveRight();
};

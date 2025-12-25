#pragma once
#include "IScene.h"
class GamePlayScene : public IScene {
public:
    void Initialize() override;
    void Update() override;
    void Draw() override;
};

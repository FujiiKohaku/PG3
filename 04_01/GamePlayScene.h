#pragma once
#include "IScene.h"
#include <Novice.h>
class GamePlayScene : public IScene {
public:
    void Initialize() override;
    void Update(char* keys, char* preKeys) override;
    void Draw() override;
};

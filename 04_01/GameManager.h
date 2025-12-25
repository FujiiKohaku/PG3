#pragma once
#include "ClearScene.h"
#include "GamePlayScene.h"
#include "IScene.h"
#include "TitleScene.h"
#include <Novice.h>
#include <memory>
class GameManager {
private:
    std::unique_ptr<IScene> sceneArr_[3];
    int currentSceneNo_;
    int prevSceneNo_;

public:
    GameManager();
    ~GameManager();
    
    int Run(char* keys, char* preKeys);
};

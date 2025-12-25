#pragma once
#include "GamePlayScene.h"
#include "IScene.h"
#include "TitleScene.h"
#include <memory>

#include "ClearScene.h"
class GameManager {
private:
    std::unique_ptr<IScene> currentScene_[3];

    int nowSceneNo_;
    int nextSceneNo_;

public:
    GameManager();
    ~GameManager();

    int Run();
};

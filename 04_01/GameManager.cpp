#include "GameManager.h"

GameManager::GameManager()
{
    sceneArr_[TITLE] = std::make_unique<TitleScene>();
    sceneArr_[GAME] = std::make_unique<GamePlayScene>();
    sceneArr_[CLEAR] = std::make_unique<ClearScene>();

    // 最初のシーン（タイトル）
    currentSceneNo_ = TITLE;
    
}

GameManager::~GameManager()
{
}

int GameManager::Run(char* keys, char* preKeys)
{
 
    prevSceneNo_ = currentSceneNo_;
    currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneState();

  
    if (prevSceneNo_ != currentSceneNo_) {
        sceneArr_[currentSceneNo_]->Initialize();
    }

    sceneArr_[currentSceneNo_]->Update(keys,preKeys);
    sceneArr_[currentSceneNo_]->Draw();

    return 0;
}

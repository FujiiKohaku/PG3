#include "GameManager.h"

GameManager::GameManager()
{
    currentScene_[Title] = std::make_unique<TitleScene>();
    currentScene_[GamePlay] = std::make_unique<GamePlayScene>();
    currentScene_[Crear] = std::make_unique<ClearScene>();
}

GameManager::~GameManager()
{
}

int GameManager::Run()
{

    return 0;
}

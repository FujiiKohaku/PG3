#include "GamePlayScene.h"
#include <iostream>
void GamePlayScene::Initialize()
{
}

void GamePlayScene::Update(char* keys, char* preKeys)
{
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        sceneState = CLEAR;
    }
}

void GamePlayScene::Draw()
{
    Novice::ScreenPrintf(10, 10, "Game Play Scene");
}

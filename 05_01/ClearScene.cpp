#include "ClearScene.h"

void ClearScene::Initialize()
{
}

void ClearScene::Update(char* keys, char* preKeys)
{
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        sceneState = TITLE;
    }
}

void ClearScene::Draw()
{
    Novice::ScreenPrintf(10, 10, "Clear Scene");
}

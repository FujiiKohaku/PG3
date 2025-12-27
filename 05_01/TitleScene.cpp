#include "TitleScene.h"
#include <iostream>
void TitleScene::Initialize()
{
    // タイトルシーンの初期化処理
}
void TitleScene::Update(char* keys, char* preKeys)
{
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        sceneState = GAME;
    }
}
void TitleScene::Draw()
{
    Novice::ScreenPrintf(10, 10, "Title Scene");
}
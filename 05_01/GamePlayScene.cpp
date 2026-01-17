#include "GamePlayScene.h"
#include <iostream>
#include "InputHandler.h"
#include "ICommand.h"
#include "Player.h"
void GamePlayScene::Initialize()
{
    inputHandler_ = new InputHandler();

    inputHandler_->AssignMoveLeftCommand2PressKeyA();
    inputHandler_->AssignMoveRightCommand2PressKeyD();
    player_ = new Player();
    player_->Initialize();
}

void GamePlayScene::Update(char* keys, char* preKeys)
{
    if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
        sceneState = CLEAR;
    }

    command_ = inputHandler_->HandleInput();
 
    if (command_) {
        command_->Exec(*player_);
    }
    player_->Update();


}

void GamePlayScene::Draw()
{
    Novice::ScreenPrintf(10, 10, "Game Play Scene");
    player_->Draw();
}

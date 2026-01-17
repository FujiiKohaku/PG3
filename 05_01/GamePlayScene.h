#pragma once
#include "IScene.h"
#include <Novice.h>
class Player;
class InputHandler;
class ICommand;
class GamePlayScene : public IScene {
public:
    void Initialize() override;
    void Update(char* keys, char* preKeys) override;
    void Draw() override;

private:
    InputHandler* inputHandler_= nullptr;
    Player* player_=nullptr;
    ICommand* command_=nullptr;
};

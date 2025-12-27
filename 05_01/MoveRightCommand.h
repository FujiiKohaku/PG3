#pragma once
#include "ICommand.h"
class Player;
class MoveRightCommand : public ICommand {

    void Execute(Player& player) override;
};

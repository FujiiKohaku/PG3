#pragma once
#include "ICommand.h"
class Player;
class MoveLeftCommand : public ICommand{

	void Execute(Player& player) override;
};

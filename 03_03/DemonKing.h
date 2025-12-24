#pragma once
#include "Enemy.h"
class DemonKing:public Enemy {
	public:
	DemonKing();
	~DemonKing();
	void Attack() override;
};

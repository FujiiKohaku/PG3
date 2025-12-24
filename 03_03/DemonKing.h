#pragma once
#include "Enemy.h"
class DemonKing:public Enemy {
	public:
	DemonKing()=default;
	~DemonKing()=default;
	void Attack() override;
};

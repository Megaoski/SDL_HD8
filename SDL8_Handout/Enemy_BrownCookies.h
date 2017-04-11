#ifndef ENEMY_BROWNCOOKIES_H
#define ENEMY_BROWNCOOKIES_H


#include "Enemy.h"


class Enemy_BrownCookies : public Enemy
{
private:
	float wave = -1.0f;
	bool going_up = true;
	int original_y = 0;
	Animation fly;

public:

	Enemy_BrownCookies(int x, int y);

	void Move();
};


#endif

#include "Application.h"
#include "Enemy_BrownCookies.h"
#include "ModuleCollision.h"


Enemy_BrownCookies::Enemy_BrownCookies(int x, int y) : Enemy(x, y)
{
	fly.PushBack({ 5, 72, 21, 22 });
	fly.speed = 0.2f;

	animation = &fly;

	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);

	original_y = y;
}

void Enemy_BrownCookies::Move()
{
	if (going_up)
	{
		if (wave > 1.0f)
			going_up = false;
		else
			wave += 0.05f;
	}
	else
	{
		if (wave < -1.0f)
			going_up = true;
		else
			wave -= 0.05f;
	}

	position.y = original_y + (25.0f * sinf(wave));
	position.x -= 1;
}

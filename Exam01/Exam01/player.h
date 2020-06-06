#pragma once
class Player
{
public:

	Player();
	void Render();
	void Update();

	float playerX;
	float playerY;
	float speed;
};
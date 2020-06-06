#pragma once
#include "bullet.h"

class PlayerBullet :public Bullet
{
public:
	
	void Update() override;
	void Render() override;

};
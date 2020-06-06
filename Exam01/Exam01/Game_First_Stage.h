#pragma once
#include "stage.h"
#include "player.h"
class GameFirstStage :public Stage
{
public:
	GameFirstStage();
	void Update() override;
	void Render() override;

	Player player;
	int firstStageY = 0;
};

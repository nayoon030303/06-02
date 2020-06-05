#pragma once
#include "stage.h"

class GameFirstStage :public Stage
{
public:
	GameFirstStage();
	void Update() override;
	void Render() override;

	float firstStageY = 0;
};

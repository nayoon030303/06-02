#pragma once
#include "stage.h"

class StageManager 
{
public:
	Stage* currentStage;

	void MakeTitleStage();
	void Render();
	void Update();
};
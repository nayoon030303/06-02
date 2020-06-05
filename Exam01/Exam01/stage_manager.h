#pragma once
#include "stage.h"

class StageManager 
{
public:
	Stage* currentStage;

	void MakeTitleStage();
	void MakeFirstStage();
	void Render();
	void Update();
};
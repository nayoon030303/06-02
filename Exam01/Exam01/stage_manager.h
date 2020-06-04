#pragma once
#include "stage.h"

class StageManager 
{
public:
	Stage* currentStage;

	void MakeTitleScreen();
	void Render();
	void Update();
};
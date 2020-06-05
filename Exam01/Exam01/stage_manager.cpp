#include "stage_manager.h"
#include "title_stage.h"
#include "global.h"
#include "Game_First_Stage.h"

void StageManager::MakeTitleStage()
{
	if (currentStage!= nullptr)
	{
		delete currentStage;
	}
	TitleStage* stage = new TitleStage();
	currentStage = stage;
}
void StageManager::MakeFirstStage()
{
	if (currentStage != nullptr)
	{
		delete currentStage;
	}
	GameFirstStage* stage = new GameFirstStage();
	currentStage = stage;
}

void StageManager::Render()
{
	if (currentStage != nullptr)
	{
		currentStage->Render();
	}
	
}

void StageManager::Update()
{
	if (currentStage != nullptr)
	{
		currentStage->Update();
	}
}
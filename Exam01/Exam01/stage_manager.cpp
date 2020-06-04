#include "stage_manager.h"
#include "title_stage.h"
#include "global.h"

void StageManager::MakeTitleStage()
{
	if (currentStage!= nullptr)
	{
		delete currentStage;
	}
	TitleStage* stage = new TitleStage();
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
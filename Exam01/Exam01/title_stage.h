#pragma once
#include "stage.h"

class TitleStage : public Stage
{
public:
	TitleStage();
	void Update() override;
	void Render() override;
};
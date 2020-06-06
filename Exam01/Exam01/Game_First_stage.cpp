#include "Game_First_Stage.h"
#include "global.h"

GameFirstStage::GameFirstStage()
{

}

void GameFirstStage::Update()
{
	firstStageY +=1;
	firstStageY = (int)firstStageY % WINDOW_HEIGHT;

	player.Update();
}

void GameFirstStage::Render()
{
	TextureElement* elements = textureManager.GetTexture(BACKGROUND1_PNG);
	elements->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 640;
	srcRect.bottom = 480;
	
	D3DXVECTOR3 pos(0, firstStageY, 0);
	elements->sprite->Draw(elements->texture,&srcRect,nullptr,&pos,D3DCOLOR_XRGB(255,255,255));

	pos = D3DXVECTOR3(0, firstStageY - WINDOW_HEIGHT, 0);
	elements->sprite->Draw(elements->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));
	
	elements->sprite->End();

	player.Render();
}
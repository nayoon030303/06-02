#include "player_bullet.h"
#include "global.h"



void PlayerBullet::Render()
{
	TextureElement* element = textureManager.GetTexture(PlayerBullet_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);
	
	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 11;
	srcRect.bottom = 11;

	D3DXVECTOR3 pos(0, 0, 0);
	
	element->sprite->Draw(element->texture, &srcRect, nullptr, &pos, D3DCOLOR_XRGB(0, 0, 0));

	element->sprite->End();
}

void PlayerBullet::Update()
{

}
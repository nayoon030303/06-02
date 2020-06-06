#include "player.h"
#include "global.h"

Player::Player()
{

}

void Player::Render()
{
	TextureElement* element = textureManager.GetTexture(PLAYER_PNG);
	element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

	RECT srcRect;
	srcRect.left = 0;
	srcRect.top = 0;
	srcRect.right = 30;
	srcRect.bottom = 46;

	D3DXVECTOR3 pos (WINDOW_WITH/2, WINDOW_HEIGHT*0.8, 0);
	D3DXVECTOR3 center(30 / 2, 46.2,0);
	element->sprite->Draw(element->texture, &srcRect, &center, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();

}
void Player::Update()
{

}
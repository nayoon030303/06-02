#include "player.h"
#include "global.h"


Player::Player()
{
	playerX = WINDOW_WITH / 2;
	playerY = WINDOW_HEIGHT * 0.8;
	speed = 300;
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

	D3DXVECTOR3 pos (playerX,playerY, 0);
	D3DXVECTOR3 center(30 / 2, 46.2,0);
	element->sprite->Draw(element->texture, &srcRect, &center, &pos, D3DCOLOR_XRGB(255, 255, 255));

	element->sprite->End();

}
void Player::Update()
{
	if (inputManager.keyBuffer[VK_LEFT] == 1)
	{
		playerX -= speed * deltaTime;
	}
	if (inputManager.keyBuffer[VK_RIGHT] == 1)
	{
		playerX += speed * deltaTime;
	}
	if (inputManager.keyBuffer[VK_UP] == 1)
	{
		playerY -= speed * deltaTime;
	}
	if (inputManager.keyBuffer[VK_DOWN] == 1)
	{
		playerY += speed * deltaTime;
	}
}
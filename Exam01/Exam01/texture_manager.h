#pragma once
#include <vector>
#include <d3dx9.h>

using namespace std;

class TextureElement 
{
public:
	int id;
	ID3DXSprite* sprite;
	LPDIRECT3DTEXTURE9 texture;
};


class TextureManager
{
public:

	vector<TextureElement*> elements;

	void LoadTexture(const TCHAR* name, int id);

	TextureElement* GetTexture(const int id);
};
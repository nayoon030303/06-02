#pragma once

#include <d3d9.h>
#include <d3dx9core.h>

#include "texture_manager.h"
#include "input_manager.h"
#include "stage_manager.h"

#define WINDOW_WITH 640
#define WINDOW_HEIGHT 480


#define PLAYER_PNG 100
#define TITLE_PNG 200
#define BACKGROUND1_PNG 300
#define Player_PNG 400

extern  LPDIRECT3D9        g_pD3D ;
extern LPDIRECT3DDEVICE9   g_pd3dDevice ;

extern float deltaTime;

//all Manager
extern TextureManager textureManager;
extern InputManger inputManager;
extern StageManager stageManager;
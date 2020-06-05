 #include "title_stage.h"
#include "global.h"

TitleStage::TitleStage()
{

}

void TitleStage::Render()
{
    TextureElement* element = textureManager.GetTexture(TITLE_PNG);

      element->sprite->Begin(D3DXSPRITE_ALPHABLEND);

      RECT srcrect;
      srcrect.top = 0;
      srcrect.left = 0;
      srcrect.right = 640;
      srcrect.bottom = 480;

      D3DXVECTOR3 pos(0, 0, 0);
      element->sprite->Draw(element->texture, &srcrect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));


      element->sprite->End();


}

void TitleStage::Update()
{
    
    if (inputManager.prevKeyBuffer[VK_LBUTTON] == 1 && inputManager.keyBuffer[VK_LBUTTON] == 0)
    {
        stageManager.MakeFirstStage();
    }
}
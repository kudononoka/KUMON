#include "DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

    ChangeWindowMode(TRUE);

    if (DxLib_Init() == -1)	
    {
        return -1;			
    }

    LoadGraphScreen(0, 0, L"graphics/bleach.png", FALSE);

    SetDrawScreen(DX_SCREEN_BACK);
    WaitKey();      
    DxLib_End();    
    return 0;
}
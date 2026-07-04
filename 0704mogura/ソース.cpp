#include"DxLib.h"
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetGraphMode(800, 600, 30);
	if (DxLib_Init() == -1)return -1;

	int fountColor = GetColor(255, 120, 0);

	while (ProcessMessage()==0&&CheckHitKey(KEY_INPUT_ESCAPE)==0)
	{
		ClearDrawScreen();

		SetFontSize(120);
		DrawFormatString(75, 250, fountColor, "Just Do It");


	}

	DxLib_End();

	return 0;
}
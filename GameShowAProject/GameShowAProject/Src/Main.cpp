#include"DxLib.h"
#include"Scene/SceneManager.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//ウインドウモードに変更
	ChangeWindowMode(TRUE);
	//SetWindowSizeExtendRate(0.5);
	//SetGraphMode(1920, 1080, 32);
	SetGraphMode(800, 600, 32);
	SetBackgroundColor(125, 125, 125);			// 背景色
	SetMainWindowText("Game");			// メニューバーのタイトル

	if (DxLib_Init() == -1)  // ＤＸライブラリ初期化処理
	{
		return -1;   // エラーが起きたら直ちに終了
	}

	// 描画先を裏の画面に設定
	SetDrawScreen(DX_SCREEN_BACK);

	while (true)
	{
		// Windowsのメッセージ処理に失敗したか、閉じられたら終了
		if (ProcessMessage() != 0) 
		{
			break; 
		}

		// DxLibのお約束：画面クリア
		ClearDrawScreen();
		clsDx();

		//SceneManager scene;
		SceneManager::Instance()->SceneUpdate();

		// DxLibのお約束：画面更新
		ScreenFlip();
	}

	//WaitKey();    // キー入力待ち

	DxLib_End();    // ＤＸライブラリ使用の終了処理

	return 0;    // ソフトの終了 
}
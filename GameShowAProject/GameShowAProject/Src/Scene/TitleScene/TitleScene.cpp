#include "TitleScene.h"
#include "SceneManager.h"
#include "DxLib.h"

extern SceneID g_SceneID;

TitleScene::TitleScene()
{

}
TitleScene::~TitleScene()
{

}

void TitleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_1) == 1)
	{
		g_SceneID = SceneID::SceneID_Game;
	}
}
void TitleScene::Draw()
{
	printfDx("title");
}
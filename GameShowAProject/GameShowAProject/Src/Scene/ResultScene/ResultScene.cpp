#include "ResultScene.h"
#include "../SceneManager.h"
#include "DxLib.h"

extern SceneID g_SceneID;

ResultScene::ResultScene()
{

}
ResultScene::~ResultScene()
{

}

void ResultScene::Update()
{
	if (CheckHitKey(KEY_INPUT_3) == 1)
	{
		g_SceneID = SceneID::SceneID_Title;
	}
}
void ResultScene::Draw()
{
	printfDx("result");
}
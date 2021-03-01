#include "GameScene.h"
#include "SceneManager.h"
#include "DxLib.h"

extern SceneID g_SceneID;

GameScene::GameScene()
{

}
GameScene::~GameScene()
{

}

void GameScene::Update()
{
	if (CheckHitKey(KEY_INPUT_2) == 1)
	{
		g_SceneID = SceneID::SceneID_Result;
	}
}
void GameScene::Draw()
{
	printfDx("game");
}
#include "SceneManager.h"
#include "TitleScene/TitleScene.h"
#include "GameScene/GameScene.h"
#include "ResultScene/ResultScene.h"

SceneID g_SceneID = SceneID::SceneID_Title;

static TitleScene g_TitleScene;
static GameScene   g_GameScene;
static ResultScene g_ResultScene;

void SceneManager::SceneUpdate()
{
	switch (g_SceneID)
	{
	case SceneID::SceneID_Title:
		g_TitleScene.Update();  
		g_TitleScene.Draw();
		break;
	case SceneID::SceneID_Game:
		g_GameScene.Update();   
		g_GameScene.Draw();
		break;
	case SceneID::SceneID_Result:
		g_ResultScene.Update();
		g_ResultScene.Draw();
		break;
	default:
		break;
	}
}
#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

enum SceneID
{
	SceneID_Title,			// タイトル
	SceneID_Game,			// ゲーム
	SceneID_Result,			// リザルト
};

class SceneManager
{
public:
	// インスタンスを取得するためのゲッター
	static SceneManager* Instance()
	{
		// この変数がこのクラスの唯一のインスタンス
		static SceneManager instance;

		return &instance;
	}

	void SceneUpdate();

private:
	SceneManager(){}
};

#endif // !SCENEMANAGER_H


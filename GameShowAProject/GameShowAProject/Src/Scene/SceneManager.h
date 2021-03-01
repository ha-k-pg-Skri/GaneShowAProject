#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

enum SceneID
{
	SceneID_Title,			// �^�C�g��
	SceneID_Game,			// �Q�[��
	SceneID_Result,			// ���U���g
};

class SceneManager
{
public:
	// �C���X�^���X���擾���邽�߂̃Q�b�^�[
	static SceneManager* Instance()
	{
		// ���̕ϐ������̃N���X�̗B��̃C���X�^���X
		static SceneManager instance;

		return &instance;
	}

	void SceneUpdate();

private:
	SceneManager(){}
};

#endif // !SCENEMANAGER_H


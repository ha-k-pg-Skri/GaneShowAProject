#include"DxLib.h"
#include"Scene/SceneManager.h"

// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//�E�C���h�E���[�h�ɕύX
	ChangeWindowMode(TRUE);
	//SetWindowSizeExtendRate(0.5);
	//SetGraphMode(1920, 1080, 32);
	SetGraphMode(800, 600, 32);
	SetBackgroundColor(125, 125, 125);			// �w�i�F
	SetMainWindowText("Game");			// ���j���[�o�[�̃^�C�g��

	if (DxLib_Init() == -1)  // �c�w���C�u��������������
	{
		return -1;   // �G���[���N�����璼���ɏI��
	}

	// �`���𗠂̉�ʂɐݒ�
	SetDrawScreen(DX_SCREEN_BACK);

	while (true)
	{
		// Windows�̃��b�Z�[�W�����Ɏ��s�������A����ꂽ��I��
		if (ProcessMessage() != 0) 
		{
			break; 
		}

		// DxLib�̂��񑩁F��ʃN���A
		ClearDrawScreen();
		clsDx();

		//SceneManager scene;
		SceneManager::Instance()->SceneUpdate();

		// DxLib�̂��񑩁F��ʍX�V
		ScreenFlip();
	}

	//WaitKey();    // �L�[���͑҂�

	DxLib_End();    // �c�w���C�u�����g�p�̏I������

	return 0;    // �\�t�g�̏I�� 
}
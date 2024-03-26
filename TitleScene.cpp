#include "TitleScene.h"
#include "TitleImage.h"
#include "Engine/Text.h"
#include "Engine/Input.h"
#include "Engine/SceneManager.h"

TitleScene::TitleScene(GameObject* parent)
	:GameObject(parent, "TitleScene"), pText(nullptr)
{
}

void TitleScene::Initialize()
{
	pText = new Text;
	pText->Initialize();
	Instantiate<TitleImage>(this);
}

void TitleScene::Update()
{
	if (Input::IsKeyDown(DIK_SPACE))
	{
		SceneManager* pSM = (SceneManager*)FindObject("SceneManager");
		pSM->ChangeScene(SCENE_ID_PLAY);
	}
}

void TitleScene::Draw()
{
	pText->Draw(550, 600, "PUSH TO SPACE");
}

void TitleScene::Release()
{
}

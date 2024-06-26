#include "HUD.h"
#include "Engine/Image.h"
#include "PlayScene.h"
#include <string>


string HUD::EnemyNumString()
{
	//enemyにPlaySceneからenemyNumを取ってきて入れる
	int enemy = ((PlayScene*)GetParent())->GetEnemyNum();
	//stringに変換
	string enemyNumString = std::to_string(enemy);
	return enemyNumString;
}

HUD::HUD(GameObject* parent)
	:GameObject(parent, "HUD"), hHUD_(-1), hNumbers_(-1)
{
}

HUD::~HUD()
{
}

void HUD::Initialize()
{
	hHUD_ = Image::Load("hud01.png");
	assert(hHUD_ >= 0);
	hNumbers_ = Image::Load("number.png");
	assert(hNumbers_ >= 0);
}

void HUD::Update()
{
	tHud_.scale_ = { 1.0,1.0,1.0 };
	tHud_.position_ = { -0.6,0.85,0 };

	
}

void HUD::Draw()
{
	Image::SetTransform(hHUD_, tHud_);
	Image::Draw(hHUD_);

	Transform trans;
	trans.scale_ = { 1.0,1.0,1.0 };
	trans.position_ = { -0.6,0.85,0 };


	string str = EnemyNumString();
	if (str.size() < 2)
		str = std::string(2 - str.size(), '0') + str;

	for (int i = 0; i < 2; i++) {
		int j = str[i] - '0';

		Image::SetRect(hNumbers_, 51.2 * j, 0, 51.2, 97);
		Image::SetTransform(hNumbers_, trans);
		Image::Draw(hNumbers_);
		trans.position_.x += 0.08;
	}

}

void HUD::Release()
{
}

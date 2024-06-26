#pragma once
#include "Engine/GameObject.h"
class ClearScene :
	public GameObject
{
	int hPict_;
public:
	//コンストラクタ
	ClearScene(GameObject* parent);

	//デストラクタ
	~ClearScene();

	//初期化
	void Initialize() override;

	//更新
	void Update() override;

	//描画
	void Draw() override;

	//開放
	void Release() override;
};




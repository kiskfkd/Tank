#pragma once
#include "Engine/GameObject.h"
class TitleImage :
    public GameObject
{
    int hPict_;

public:
    //�R���X�g���N�^
    //����:parent �e�I�u�W�F�N�g�@(SceneManager)
    TitleImage(GameObject* parent);
    ~TitleImage();

    //������
    void Initialize() override;

    //�X�V
    void Update() override;

    //�`��
    void Draw() override;

    //�J��
    void Release() override;
};


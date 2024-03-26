#pragma once
#include "Engine/GameObject.h"

class Text;
class TitleScene :
    public GameObject
{
    Text* pText;
public:
    TitleScene(GameObject* parent);

    //‰Šú‰»
    void Initialize() override;

    //XV
    void Update() override;

    //•`‰æ
    void Draw() override;

    //ŠJ•ú
    void Release() override;
};
#include "beasty\GameManager.h"
#include "Asteroider.h"
#include "beasty\ActorFactory.h"

using namespace beasty;
using namespace asteroider;

void Asteroider::Update(float fTime, float fElapsedTime)
{

}

int Asteroider::Init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow, std::wstring title)
{
    AddActor(ActorFactory::GetInstance().CreateActor());
    return Game3D::Init(hInstance, hPrevInstance, lpCmdLine, nCmdShow, title);
}

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
    Asteroider* pGame = new Asteroider();
    return pGame->Init(hInstance, hPrevInstance, lpCmdLine, nCmdShow, L"asteroider");
}
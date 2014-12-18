#include "beasty\GameManager.h"

using namespace beasty;

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
    return GameManager::Instance().Init(hInstance, hPrevInstance, lpCmdLine, nCmdShow, L"asteroider");
}
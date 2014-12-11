#include "GameManager.h"

using namespace beasty;

int WINAPI wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPWSTR lpCmdLine, _In_ int nCmdShow)
{
    GameManager game = GameManager(L"asteroider");
    return game.init(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
}
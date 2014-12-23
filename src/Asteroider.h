#pragma once

#include "beasty\Game3D.h"

namespace asteroider
{
    class Asteroider : public beasty::Game3D
    {
    public:
        void Update(float fTime, float fElapsedTime);
        int Init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow, std::wstring title);
    };
}
#pragma once

#include "DXUT.h"

namespace beasty
{
    class GraphicsEngine;
    class InputEngine;

    class Game3D
    {
    public:
        Game3D(std::wstring title);
        ~Game3D();

        static void CALLBACK update(double fTime, float fElapsedTime, void* pUserContext);

        virtual int init(HINSTANCE hInstance,
                         HINSTANCE hPrevInstance,
                         LPWSTR lpCmdLine,
                         int nCmdShow);

        static LRESULT CALLBACK msgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, bool* pbNoFurtherProcessing, void* pUserContext);

    private:
        std::wstring m_title;
        GraphicsEngine *m_graphicsEngine;
        InputEngine *m_inputEngine;
    };
}
#include "Application.h"
#include <stdio.h>
#include "Core.h"

namespace LRCarry
{
    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    void Application::Run()
    {
        while (true)
        {
            printf(DEBUG_LOG "\n");
        }
        
    }
}
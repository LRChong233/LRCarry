#include "Application.h"

#include "lrcpch.h"

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
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication))
        {
            LRC_TRACE(e);
        }

        if (e.IsInCategory(EventCategoryInput))
        {
            LRC_TRACE(e);
        }
        

        while (true)
        {
            // printf(DEBUG_LOG "\n");
        }
        
    }
}
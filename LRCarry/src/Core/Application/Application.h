#pragma once

#include "Core/Events/Event.h"
#include "Core/Events/ApplicationEvent.h"

namespace LRCarry
{
    class Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();
}

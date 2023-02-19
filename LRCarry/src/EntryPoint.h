#pragma once

#include "Application.h"

int main()
{
    LRCarry::Log::Init();
    LRC_CORE_WARN("Initialized Log!");
    int a = 5;
    LRC_INFO("Hello! var={0}", a);

    auto app = LRCarry::CreateApplication();
    app->Run();
    delete app;
}
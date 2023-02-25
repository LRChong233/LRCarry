#pragma once

#include "Application.h"
// #include "lrcpch.h"

int main(int argc, char** argv)
{
    LRCarry::Log::Init();
    LRC_CORE_WARN("Initialized Log!");

    auto app = LRCarry::CreateApplication();
    app->Run();
    delete app;
    return 0;
}


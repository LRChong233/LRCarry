#pragma once

#include "Application.h"

int main()
{
    auto app = LRCarry::CreateApplication();
    app->Run();
    delete app;
}
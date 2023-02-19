#include "LRCarry.h"

class Sandbox : public LRCarry::Application
{
public:
    Sandbox(){}
    ~Sandbox(){}
};


LRCarry::Application* LRCarry::CreateApplication()
{
    return new Sandbox();
}
#include "LRCarry.h"

class Sandbox : public LRCarry::Application
{
public:
    Sandbox()
    {
        LRC_TRACE("here's a TRACE log");
        LRC_ERROR("here's a ERROR log");
        LRC_FATAL("here's a FATAL log");
    }
    ~Sandbox(){}
};


LRCarry::Application* LRCarry::CreateApplication()
{
    return new Sandbox();
}
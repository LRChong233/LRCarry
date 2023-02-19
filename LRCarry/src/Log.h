#pragma once

#include <memory>

#include "spdlog/spdlog.h"

namespace LRCarry
{
    class Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

    private:
        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;
    };
}

// Core log macros
#define LRC_CORE_TRACE(...)    ::LRCarry::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define LRC_CORE_INFO(...)     ::LRCarry::Log::GetCoreLogger()->info(__VA_ARGS__)
#define LRC_CORE_WARN(...)     ::LRCarry::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define LRC_CORE_ERROR(...)    ::LRCarry::Log::GetCoreLogger()->error(__VA_ARGS__)
#define LRC_CORE_FATAL(...)    ::LRCarry::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define LRC_TRACE(...)         ::LRCarry::Log::GetClientLogger()->trace(__VA_ARGS__)
#define LRC_INFO(...)          ::LRCarry::Log::GetClientLogger()->info(__VA_ARGS__)
#define LRC_WARN(...)          ::LRCarry::Log::GetClientLogger()->warn(__VA_ARGS__)
#define LRC_ERROR(...)         ::LRCarry::Log::GetClientLogger()->error(__VA_ARGS__)
#define LRC_FATAL(...)         ::LRCarry::Log::GetClientLogger()->critical(__VA_ARGS__)

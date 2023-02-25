includes("LRCarry", "Sandbox")

set_languages("c99", "c++11")

add_includedirs("deps/spdlog/include")

add_includedirs("LRCarry/src")
add_includedirs("LRCarry")

add_defines("LRC_PLATFORM_WINDOWS")
add_defines("LRC_BUILD_DLL")
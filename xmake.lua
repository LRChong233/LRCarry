includes("LRCarry", "Sandbox")

add_includedirs("deps/spdlog/include")

add_includedirs("LRCarry/src")
add_includedirs("LRCarry")

add_defines("LRC_PLATFORM_WINDOWS")
add_defines("LRC_BUILD_DLL")
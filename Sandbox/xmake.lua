add_rules("mode.debug", "mode.release")

target("Sandbox")
    set_kind("binary")
    add_files("src/*.cpp")

    add_deps("LRCarry")

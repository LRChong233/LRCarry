add_rules("mode.debug", "mode.release")

target("LRCarry")
    set_kind("static")
    add_files("src/*.cpp")

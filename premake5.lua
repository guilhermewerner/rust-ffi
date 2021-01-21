workspace "Library"
    architecture "x64"

    configurations
    {
        "debug",
        "release"
    }

outputDir = "%{cfg.buildcfg}"

project "Cpp"
    location "Examples/Cpp"
    kind "ConsoleApp"
    language "C++"

    targetdir ("Binaries/" .. outputDir)
    objdir ("Intermediate/")

    files
    {
        "Examples/%{prj.name}/**.h",
        "Examples/%{prj.name}/**.cpp",
    }

    includedirs
    {
        "Source"
    }

    libdirs
    {
        "Binaries/%{cfg.buildcfg}"
    }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"

        links
        {
            "Library.dll.lib"
        }

    filter { "system:windows", "configurations:debug" }
        runtime "Debug"
        buildoptions "/MDd"
        symbols "on"

    filter  { "system:windows", "configurations:release" }
        runtime "Release"
        buildoptions "/MD"
        optimize "on"

project "C"
    location "Examples/C"
    kind "ConsoleApp"
    language "C"

    targetdir ("Binaries/" .. outputDir)
    objdir ("Intermediate/")

    files
    {
        "Examples/%{prj.name}/**.h",
        "Examples/%{prj.name}/**.c",
    }

    includedirs
    {
        "Source"
    }

    libdirs
    {
        "Binaries/%{cfg.buildcfg}"
    }

    filter "system:windows"
        staticruntime "On"
        systemversion "latest"

        links
        {
            "Library.dll.lib"
        }

    filter { "system:windows", "configurations:debug" }
        runtime "Debug"
        buildoptions "/MDd"
        symbols "on"

    filter  { "system:windows", "configurations:release" }
        runtime "Release"
        buildoptions "/MD"
        optimize "on"

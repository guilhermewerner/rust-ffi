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
        staticruntime "On"
        systemversion "latest"

        links
        {
            "Library.dll.lib"
        }

    filter { "system:windows", "configurations:debug" }
        runtime "Debug"
        symbols "on"

    filter  { "system:windows", "configurations:release" }
        runtime "Release"
        optimize "on"

    filter "system:linux"
        links
        {
            "Library"
        }

    filter "system:darwin"
        links
        {
            "Library"
        }

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
        symbols "on"

    filter  { "system:windows", "configurations:release" }
        runtime "Release"
        optimize "on"

    filter "system:linux"
        links
        {
            "Library"
        }

    filter "system:darwin"
        links
        {
            "Library"
        }

project "CSharp"
    location "Examples/CSharp"

    filter { "system:windows" }
        kind "ConsoleApp"
    filter { "system:linux" }
        kind "None"
    filter { "system:darwin" }
         kind "None"

    filter {}

    language "C#"

    targetdir ("Binaries/" .. outputDir)
    objdir ("Intermediate/")

    files
    {
        "Examples/%{prj.name}/**.cs",
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

        defines
        {
            "PLATFORM_WINDOWS"
        }

    filter { "system:windows", "configurations:debug" }
        runtime "Debug"
        symbols "on"

    filter  { "system:windows", "configurations:release" }
        runtime "Release"
        optimize "on"

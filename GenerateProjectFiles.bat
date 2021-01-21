cbindgen --config .\Config\Bindings.toml --crate Library --output Source\Library.h
call .\Premake\Windows\premake5.exe vs2019

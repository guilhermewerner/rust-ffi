#!/bin/zsh

cbindgen --config ./Config/Bindings.toml --crate Library --output Source/Library.h
sudo ./Premake/Mac/premake5 xcode4

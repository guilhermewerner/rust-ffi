#!/bin/bash

cbindgen --config ./Config/Bindings.toml --crate Library --output Source/Library.h
sudo ./Premake/Linux/premake5 gmake2

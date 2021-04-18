# Copyright (c) TribuFu. All Rights Reserved

import platform

from ctypes import *

# Windows

if platform.system() == "Windows":
    Library = cdll.LoadLibrary("./Binaries/debug/Library.dll")

# Linux

elif platform.system() == "Linux":
    Library = cdll.LoadLibrary("./Binaries/debug/libLibrary.so")
# Mac

elif platform.system() == "Darwin":
    Library = cdll.LoadLibrary("./Binaries/debug/libLibrary.dylib")

Library.Hello.restype = c_char_p

data = c_char_p("Python".encode('utf-8'))

print(Library.Hello(data))

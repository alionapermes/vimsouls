# VimSouls

Learn Vim by playing

## Build

Before building make sure that you have installed [conan](https://conan.io/)

Arch/Manjaro Linux:  
`yay -S conan`

Any other OS:  
`pip install conan`

Base needed actions to build the game

```sh
mkdir build && cd build
conan install .. --build=missing
cmake ..
```

Available cmake options:
`-DTESTS`, `-DDEBUG`, `-DCMAKE_EXPORT_COMPILE_COMMANDS`


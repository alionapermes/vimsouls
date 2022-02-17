# VimSouls

Learn Vim by playing

## Build

Before building make sure that you have installed [conan](https://conan.io/)

Any OS:
`pip install conan`

Arch/Manjaro Linux:
`yay -S conan`


Base needed actions to build the game

```sh
mkdir build
conan install .. --build=missing
cmake ..
```

Optional cmake flags: `-DTESTS`, `-DDEBUG`, `-DCMAKE_EXPORT_COMPILE_COMMANDS`


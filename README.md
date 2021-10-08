**_GT_**_Libc_ is **[Game Trainer](https://en.wikipedia.org/wiki/Trainer_(games)) library for _c/c++ in windows_** it provides all the necessary methods to make simple game trainer in
windows using **WIN32-API** with ease.
It uses only **WIN32-API** methods instead of **CRT** method because this is intended to work on **Windows** system only
and not shall be portable or to target other OS like **_Linux_,_MAC OS_** etc.

## Check project [GTLibc-library](https://github.com/haseeb-heaven/GTLibc).

# Online Usage licence : 
THIS LIBRARY IS INTENDED TO USE ONLY FOR **_OFFLINE GAMES_** ONLY AND YOU AGREE NOT TO USE THIS FOR **_ONLINE GAMES_** BY ANY MEANS,AND NOT TO CREATE MODS/CHEATS FOR **ONLINE GAMES.**

# Project info : 
This project is to build static library **.lib** files for **_GTLibc_** that can be used in other external projects just by including ".lib" file</br>
This was tested in **VS2019** IDE - Visual Studio 2019.
Now GTLibc can be included in Visual Studio C++ projects easily.

## How to include library after building.
Just add this line after including file

`#include "GTLibc.h" //Only .h file needed now`.</br>
`#pragma comment(lib,"libs/GTLibc-x86-Release.lib")`


# DOS Games Steam Launchers

[![Build](https://github.com/AntoineJT/dos-games-steam-launchers/actions/workflows/main.yml/badge.svg)](https://github.com/AntoineJT/dos-games-steam-launchers/actions/workflows/main.yml)

Just a simple collection of minimal C programs to launch some old DOS games from Steam using source ports instead of the original versions via DOSBox.

---

This thing exists because trusting premade closed source/prebuilt similar launchers is unnecessarily risky since I can do this within a minute.

I'm now providing pre-built binaries, but built exclusively by GitHub machines. \
You can find that in the [releases](https://github.com/AntoineJT/dos-games-steam-launchers/releases) tab.

I'm still fond of the "don't trust anyone on the internet" thing but when GitHub runners will have been compromised, it will cause a lot more problems than just making doubtful binaries for this little side-project.

## What is supported?

- **Blood**
  - [BuildGDX (BloodGDX)](#blood---buildgdx)
- **Doom (1993)**
  - [Chocolate Doom](#doom-1993---chocolate-doom)
- **Heretic**
  - Chocolate Heretic
- **HeXen**
  - **Beyond Heretic** (base game)
    - Chocolate HeXen
  - **Deathkings of the Dark Citadel** (Expansion Pack)
    - Chocolate HeXen
- **Red Faction** (not a DOS game)
  - [Dash Faction](#red-faction)

## Common instructions

### Dependencies

You'll need to have `gcc.exe` in your PATH.

I personally use [MSYS2](https://www.msys2.org/) to have MinGW on Windows, but you can use whatever you want. \
Just don't forget to add `gcc.exe` to your system PATH.

### How to build?

Just run `build.bat` to build every exe files. \
You now have a bunch of exe files.

## How to use?

### Blood - BuildGDX

First, check the section above: you need to build the file yourself.

Since this is a BloodGDX launcher, you'll need `java.exe` to be in the PATH of your system. \
You can download the closed source official [Oracle JRE](https://www.java.com/download/) or the open source OpenJDK prebuilt binaries by [AdoptOpenJDK](https://adoptopenjdk.net/).

Download BuildGDX on [the official website](https://m210.duke4.net/), and put it in your Steam Blood directory.
It must be named `BuildGDX.jar`. \
Rename the original `dosbox.exe` file to whatever you want, for example, `dosbox.exe.orig`. \
Copy the previously compiled `dosbox_bloodgdx.exe` to your Blood Steam folder and rename it `dosbox.exe`.

You can now run the game using the Steam Play button.

![Steam screenshot](.images/Steam_screenshot.png)

### Doom (1993) - Chocolate Doom

- Go to the `base` game subfolder
- Rename `dosbox.exe` to `dosbox.orig.exe` to be able to revert the process without verifying file integrity on Steam
- Copy `dosbox_chocolate-doom.exe` to the `base` folder
- Rename `dosbox_chocolate-doom.exe` to `dosbox.exe`
- Go back to the root game folder
- Create a folder named `chocolate-doom`
- [Download Chocolate Doom](https://github.com/chocolate-doom/chocolate-doom/releases) (the win32 zip one)
- Extract chocolate doom archive to the previously created folder
- Run the game from Steam

### Heretic/HeXen games

For every `dosbox_<something>.exe` file, just rename it `dosbox.exe` to replace the original `dosbox.exe` file (rename the original one to `dosbox.orig.exe` to be able to revert the process without verifying file integrity in Steam).

For the 3 heretic/hexen games supported, the original dosbox.exe file to replace can be found in the `base/` subfolder in the game files.

### Red Faction

Install [Dash Faction](https://github.com/rafalh/dashfaction) in your game directory.

Rename the original `RedFaction.exe` to whatever you want (i.e. `RedFaction.original.exe`) and you're good to go.

Antoine "AntoineJT" Tournepiche

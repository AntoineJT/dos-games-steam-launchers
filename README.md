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

See MANUALs in release builds or READMEs in dist_template folder.

Antoine "AntoineJT" Tournepiche

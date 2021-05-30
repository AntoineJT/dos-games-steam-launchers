# DOS Games Steam Launchers

*This was first called BloodGDX Steam 
Launcher and used to support only
BloodGDX*

Just a simple collection of minimal C 
programs to launch some old DOS games
from Steam using source ports instead
of the original versions via DOSBox.

---
This thing exists because trusting premade
closed source/prebuilt similar launchers 
is unnecessarily risky since I can do 
this within a minute.
That's why I do not plan to provide prebuilt
versions: just build it yourself, you'll
be sure about the code you're running.
If I do someday, remembers that it's better
to build them yourself at least to have the
latest binaries.

## What is supported?

- Blood
  - BloodGDX
- Heretic
  - Chocolate Heretic
- HeXen: Beyond Heretic
  - Chocolate HeXen
- HeXen: Deathkings of the Dark Citadel
  - Chocolate HeXen

## Common instructions
### Dependencies

You'll need to have `gcc.exe` in your PATH.
I personally use [MSYS2](https://www.msys2.org/)
to have MinGW on Windows, but you can use whatever
you want. \
Just don't forget to add `gcc.exe` to your system
PATH.

### How to build?

Just run `build.bat` to build every exe files.
You now have a bunch of exe files.

## How to use?

### Blood

First, check the section above: you need to build
the file yourself.

Since this is a BloodGDX launcher, you'll 
need `java.exe` to be in the PATH of your
system.
You can download the closed source official
[Oracle JRE](https://www.java.com/download/) 
or the open source OpenJDK prebuilt binaries 
by [AdoptOpenJDK](https://adoptopenjdk.net/).

Download BuildGDX on 
[the official website](https://m210.duke4.net/), 
and put it in your Steam Blood directory. 
It must be named `BuildGDX.jar`. \
Rename the original `dosbox.exe` file to whatever 
you want, for example, `dosbox.exe.orig`. \
Copy the previously compiled `dosbox_bloodgdx.exe` 
to your Blood Steam folder and rename it `dosbox.exe`.

You can now run the game using the Steam Play button.

![Steam screenshot](.images/Steam_screenshot.png)

### Heretic/HeXen games

For every `dosbox_<something>.exe` file, just
rename it `dosbox.exe` to replace the original
`dosbox.exe` file (rename the original one to
something like `dosbox.exe.orig` to be able to
revert the process without verify file integrity
in Steam).

For the 3 heretic/hexen games supported,
the original dosbox.exe file to replace can 
be found in the `base/` subfolder 
in the game files.

Antoine "AntoineJT" Tournepiche

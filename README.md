# BloodGDX Steam Launcher

Just a simple C program to BloodGDX when 
launching the game through Steam.

---
This thing exists because trusting premade
closed source similar launchers is stupid
since I can do this within a minute.
That's why I will not provide prebuilt
versions: just build it yourself, you'll
be sure about the code you're running.

## How to build

First, you'll need to have `gcc.exe` in your PATH.
I personally use [MSYS2](https://www.msys2.org/)
to have MinGW on Windows, but you can use whatever
you want. \
Just don't forget to add `gcc.exe` to your system
PATH.

Then, run `build.bat` (it will build the exe file).
You now have a `dosbox.exe` file you will use later.

## How to use?

First, check the section above: you need to build the
file yourself.

Since this is a BloodGDX launcher, you'll 
need `java.exe` to be in the PATH of your
system.
You can download the closed source official
[Oracle JRE](https://www.java.com/download/) 
or the open source OpenJDK prebuilt binaries 
by [AdoptOpenJDK](https://adoptopenjdk.net/).

Download BuildGDX on [the official website]
(https://m210.duke4.net/), and put it in your Steam
Blood directory. It must be named `BuildGDX.jar`. \
Rename the original `dosbox.exe` file to whatever 
you want, for example, `dosbox.exe.orig`. \
Copy the previously compiled `dosbox.exe` to your 
Blood Steam folder.

You can now run the game using the Steam Play button.

![Steam screenshot](.images/Steam_screenshot.png)

Antoine "AntoineJT" Tournepiche

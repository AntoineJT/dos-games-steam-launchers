#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

enum cmd_color {
    RED = 12,
    WHITE = 15
};

#define HEXEN_CMD "chocolate-hexen.exe -iwad ..\\base\\HEXEN.WAD"
#if defined(HERETIC)
    #define CHOCO_FOLDER "chocolate-heretic"
    #define CHOCO_CMD "chocolate-heretic.exe -iwad ..\\base\\HERETIC.WAD"
#elif defined(HEXEN)
    #define CHOCO_FOLDER "chocolate-hexen"
    #define CHOCO_CMD HEXEN_CMD
#elif defined(HEXENDD)
    #define CHOCO_FOLDER "chocolate-hexen"
    #define CHOCO_CMD "chocolate-hexen.exe -iwad ..\\base\\HEXEN.WAD -file ..\\base\\HEXDD.WAD"
#elif defined(DOOM)
    #define CHOCO_FOLDER "chocolate-doom"
    #define CHOCO_CMD "chocolate-doom.exe -iwad ..\\base\\DOOM.WAD"
#endif

#if !defined(CHOCO_FOLDER) || !defined(CHOCO_CMD)
    #error This game is not supported
#endif

int main(void)
{
    if (chdir(CHOCO_FOLDER) == 0) {
        #if !defined(HEXENDD)
        system(CHOCO_CMD);
        return EXIT_SUCCESS;
        #else
        fputs("What do you want to run?"
            "\n" "1. Hexen: Deathkings of the Dark Citadel"
            "\n" "2. Hexen (base game)"
            "\n" "0. Quit", stdout);
        while (true) {
            char key = getchar();
            switch (key) {
                case '1':
                    system(CHOCO_CMD);
                    return EXIT_SUCCESS;
                case '2':
                    system(HEXEN_CMD);
                    return EXIT_SUCCESS;
                case '0':
                    return EXIT_SUCCESS;
            }
        }
        #endif
    }

    const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(console, RED);
    puts(CHOCO_FOLDER " folder not found!");

    SetConsoleTextAttribute(console, WHITE);
    puts("Make sure you have copied " CHOCO_FOLDER " files "
        "in the root directory/" CHOCO_FOLDER " of the game "
        "\n" "AND that you're running it from Steam."
        "\n" "You can't run this file outside of Steam directly!"
        "\n");

    system("pause");
    return EXIT_FAILURE;
}

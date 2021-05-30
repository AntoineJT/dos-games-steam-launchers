#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

enum cmd_color {
    RED = 12,
    WHITE = 15
};

const char* folders[] = {
    "chocolate-heretic"
};

const char* commands[] = {
    "chocolate-heretic.exe -iwad ..\\base\\HERETIC.WAD"
};

#ifdef HERETIC
    #define GAME 0
#elif defined(HEXEN)
    #define GAME 1
    #error unsupported for now
#elif defined(HEXENDD)
    #define GAME 2
    #error unsupported for now
#endif

#define CHOCO_FOLDER folders[GAME]
#define CHOCO_CMD commands[GAME]

int main(void)
{
    if (chdir(CHOCO_FOLDER) != 0) {
        const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        const char* folder = CHOCO_FOLDER;

        SetConsoleTextAttribute(console, RED);
        printf("%s folder not found!\n", folder);

        SetConsoleTextAttribute(console, WHITE);
        printf("Make sure you have copied %s files "
            "in the root directory/%s of the game "
            "\n" "AND that you're running it from Steam."
            "\n" "You can't run this file outside of Steam directly!"
            "\n", folder, folder);
        system("pause");
        return EXIT_FAILURE;
    }
    system(CHOCO_CMD);
}

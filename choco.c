#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

enum cmd_color {
    RED = 12,
    WHITE = 15
};

#if defined(HERETIC)
    #define CHOCO_FOLDER "chocolate-heretic"
    #define CHOCO_CMD "chocolate-heretic.exe -iwad ..\\base\\HERETIC.WAD"
#elif defined(HEXEN)
    #define CHOCO_FOLDER "chocolate-hexen"
    #define CHOCO_CMD "chocolate-hexen.exe -iwad ..\\base\\HEXEN.WAD"
#elif defined(HEXENDD)
    #define CHOCO_FOLDER "chocolate-hexen"
    #define CHOCO_CMD "chocolate-hexen.exe -iwad ..\\base\\HEXEN.WAD -file ..\\base\\HEXDD.WAD"
#endif

#if !defined(CHOCO_FOLDER) || !defined(CHOCO_CMD)
    #error This game is not supported
#endif

int main(void)
{
    const char* folder = CHOCO_FOLDER;

    if (chdir(folder) == 0) {
        system(CHOCO_CMD);
        return EXIT_SUCCESS;
    }

    const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

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

#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

enum cmd_color {
    RED = 12,
    WHITE = 15
};

int main(void)
{
    if (chdir("chocolate-heretic") != 0) {
        const HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(console, RED);
        puts("chocolate-heretic folder not found!");
        SetConsoleTextAttribute(console, WHITE);
        puts("Make sure you have copied chocolate-heretic files "
            "in the root directory/chocolate-heretic of the game "
            "\n" "AND that you're running it from Steam."
            "\n" "You can't run this file outside of Steam directly!"
            "\n");
        system("pause");
        return EXIT_FAILURE;
    }
    system("chocolate-heretic.exe -iwad ..\\base\\HERETIC.WAD");
}

#include <stdlib.h>

#if defined(BLOOD)
    #define GAME_CMD "java -jar BUILDGDX.jar"
#elif defined(RED_FACTION)
    #define GAME_CMD "DashFactionLauncher.exe"
#endif

#if !defined(GAME_CMD)
    #error This game is not supported
#endif

int main(void)
{
    system(GAME_CMD);
}

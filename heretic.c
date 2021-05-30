#include <assert.h>
#include <direct.h>
#include <stdlib.h>

int main(void) {
    assert(chdir("chocolate-heretic") == 0);
    system("chocolate-heretic.exe -iwad ..\\base\\HERETIC.WAD");
}

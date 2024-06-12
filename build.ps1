Copy-Item -Path dist_template -Destination dist -Recurse

gcc choco.c -O3 -DDOOM -o "dist/Doom/ChocolateDoom/dosbox.exe"
gcc choco.c -O3 -DHERETIC -o "dist/Heretic/ChocolateHeretic/dosbox.exe"
gcc choco.c -O3 -DHEXEN -o "dist/Hexen/ChocolateHexen/dosbox.exe"
gcc choco.c -O3 -DHEXENDD -o "dist/Hexen Deathkings of the Dark Citadel/dosbox.exe"
gcc wrapper.c -O3 -DBLOOD -o "dist/Blood/BuildGDX/dosbox.exe"
gcc wrapper.c -O3 -DRED_FACTION -o "dist/Red Faction/DashFaction/RedFaction.exe"

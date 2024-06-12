Copy-Item -Path dist_template -Destination dist -Recurse

gcc wrapper.c -O3 -DBLOOD -o "dist/Blood/BuildGDX/dosbox.exe"
gcc choco.c -O3 -DDOOM -o "dist/Doom/Chocolate Doom/dosbox.exe"
gcc choco.c -O3 -DHERETIC -o "dist/Heretic/Chocolate Heretic/dosbox.exe"
gcc choco.c -O3 -DHEXEN -o "dist/Hexen/Chocolate Hexen/dosbox.exe"
gcc choco.c -O3 -DHEXENDD -o "dist/Hexen Deathkings of the Dark Citadel/Chocolate Hexen/dosbox.exe"
gcc wrapper.c -O3 -DRED_FACTION -o "dist/Red Faction/Dash Faction/RedFaction.exe"

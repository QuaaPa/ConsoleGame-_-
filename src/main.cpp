#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include <conio.h>
#include <string>
#include <Windows.h>

#include "Map/map.hpp"
#include "render/rendering.hpp"
#include "player/player.hpp"


int main()
{
    //Load default map from txt file "map.txt to vector "map" 
    Map defaultMap;
    defaultMap.ReadMap();

    Ren window;
    window.SetMap(defaultMap.map);

    Player player1;

    //Game loop
    while (true)
    {
        //CLEAR FRAME
        Sleep(250);
        system("cls");
        //set position player 
        if (GetAsyncKeyState(VK_LEFT) & 0x8000)
        {
            player1.PosX - 1;
        }
        Sleep(10);
        if (GetAsyncKeyState(VK_UP) & 0x8000)
        {
            player1.PosY + 1;
        }
        Sleep(10);
        if (GetAsyncKeyState(VK_DOWN) & 0x8000)
        {
            player1.PosY - 1;
        }
        Sleep(100);
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
        {
            player1.PosX + 1;
        }
        Sleep(10);


        //RENDER MAP WITH PLAYER
        window.RenderMap(player1.PosX,player1.PosY);
    }


    return 0;

}

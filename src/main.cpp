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
    Map PlayerMap;
    PlayerMap.ReadMap();

    Ren window;
    window.SetMap(PlayerMap.map);

    Player player1;


    int width = PlayerMap.width();
    std::cout << "width-[" << width << "]";
    int height = PlayerMap.height();
    std::cout << "height-[" << height << "]"<<std::endl;

    //Game loop
    while (true)
    {
        //CLEAR FRAME
        Sleep(250);
        system("cls");

        //set position player
        if(player1.PosX > 0)
        {
            if (GetAsyncKeyState(VK_LEFT) & 0x8000)
            {
                player1.PosX = -1;
            }
            Sleep(10);

        }
        if (player1.PosY > 0)
        {
            if (GetAsyncKeyState(VK_UP) & 0x8000)
            {
                player1.PosY = -1;
            }
            Sleep(10);

        }
        if(player1.PosY < height)
        {
            if (GetAsyncKeyState(VK_DOWN) & 0x8000)
            {
                player1.PosY = +1;
            }
            Sleep(10);
        }
        if(player1.PosX < width)
        {
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
            {
                player1.PosX = +1;
            }
            Sleep(10);
        }


        //RENDER MAP WITH PLAYER
        std::cout << "x-[" << player1.PosX<<"] y-["<<player1.PosY<<"]"<<std::endl;
        window.RenderMap(player1.PosX,player1.PosY);
    }


    return 0;

}

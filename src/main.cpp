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

void GameLogicMovie(int& PosY) {
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(650));
        PosY--;
    }
}

int main()
{
    //Load default map from txt file "map.txt to vector "map" 
    Map PlayerMap;
    PlayerMap.ReadMap();

    //set map to vector
    Render window;
    window.SetMap(PlayerMap.map);

    //init player
    Player player1;



    //Get width and height from class MAP
    int width = PlayerMap.width() - 2; // -2 because i need fake barier 
    int height = PlayerMap.height() - 2;   // -2 because i need fake barier 




    //Game Logic movie
    std::thread LOGIC(GameLogicMovie, std::ref(player1.PosY));
    LOGIC.detach();


    while(true)
    {
        Sleep(25);
        system("cls");


        //RIGHT
        if (player1.PosX < width)
        {
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
            {
                player1.PosX += 1;
            }
            Sleep(1);
        }

        //LEFT
        if (player1.PosX > 1)
        {
            if (GetAsyncKeyState(VK_LEFT) & 0x8000)
            {
                player1.PosX -= 1;
            }
            Sleep(1);
        }

        //render game
        window.RenderMap(player1.PosX, player1.PosY, width, height);
    }


    return 0;

}


#include "rendering.hpp"

void Render::RenderMap(int PosX, int PosY,int width, int height)
{
    if(map[PosY][PosX] == '1')
    {
        std::ifstream GAMEOVER("src/map/game_over.txt");
        std::string line;
        while(std::getline(GAMEOVER, line))
        {
            std::cout << line << std::endl;
        }
        Sleep(2000);
    }
    if(PosY == 0)
    {
        std::ifstream VICTORY("src/map/victory.txt");
        std::string line;
        while (std::getline(VICTORY, line))
        {
            std::cout << line << std::endl;
        }
        Sleep(2000);
    }
    else
    {
        for (int y = 0; y < map.size(); y++)
        {
            for (int x = 0; x < map[y].size(); x++)
            {
                if (y == PosY && x == PosX)
                {
                    std::cout << '+';
                }
                else
                {
                    std::cout << map[y][x];
                }
            }
            std::cout << std::endl;
        }
    }
}

#include "rendering.hpp"

void Render::RenderMap(int PosX, int PosY,int width, int height)
{
    for (int y = 0; y < map.size(); y++)
    {
        for (int x = 0; x < map[y].size(); x++)
        {
            if(y==PosY && x == PosX)
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

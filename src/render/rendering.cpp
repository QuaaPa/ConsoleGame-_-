#include "rendering.hpp"

void Ren::RenderMap(int PosX, int PosY)
{
    
    for (int y = 0; y < map.size(); y++)
    {
        for (int x = 0; x < map[y].size(); x++)
        {
            std::cout << map[y][x];
        }
        std::cout << std::endl;
    }
    std::cout << "x-[" << PosX<<"] y-["<<PosY<<"]"<<std::endl;
    map[PosY][PosX] = 'o';
        
    
}

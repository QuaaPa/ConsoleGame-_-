#include "rendering.hpp"

    void render(std::vector<std::vector<char>> map)
    {

        for (int y = 0; y < map.size(); y++)
        {
            for (int x = 0; x < map[y].size(); x++)
            {
                std::cout << map[y][x];
            }
            std::cout << std::endl;
        }
    }
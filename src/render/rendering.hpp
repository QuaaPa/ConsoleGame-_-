#ifndef RENDERING
#define RENDERING


#include <vector>
#include <iostream>

class Rendering
{

private:

    std::vector<std::vector<char>> map;

public:
    //set default map
    void setmap(std::vector<std::vector<char>> map)
    {
        this->map = map;
    }

    void renderMap()
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

};

#endif

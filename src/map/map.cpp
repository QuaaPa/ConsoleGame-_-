#include "map.hpp"

int height()
{
    std::ifstream file("src/map/map.txt");
    std::string line;

    int height = 0;

    while (std::getline(file, line))
    {
        height++;
    }
    return height;
}

int width()
{
    std::ifstream file("src/map/map.txt");
    std::string line;

    std::getline(file, line);
    int width = line.size();
    return width;
}


void Map::CreateMap()
{
    map.resize(height(), std::vector<char>(width()));
    std::ifstream FileMap;
    //open file
    FileMap.open("src/map/map.txt");
    //debug (opened file or not)
    if (!FileMap.is_open())
    {
        std::cout << "map.txt is not open" << std::endl;
    }

    std::string MapLine;

    for (int y = 0; y < height(); y++)
    {
        std::getline(FileMap, MapLine);
        for (int x = 0; x < width(); x++)
        {

            if (MapLine[x] == '0') map[y][x] = ' ';
            else map[y][x] = MapLine[x];
        }
    }
}

void Map::ReadMap()
{
    CreateMap();
}

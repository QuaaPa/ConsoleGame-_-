#ifndef MAP
#define MAP

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class Map
{
public:
    std::vector<std::vector<char>> map;

    void CreateMap();
    void ReadMap();

    int height();
    int width();

};

#endif 




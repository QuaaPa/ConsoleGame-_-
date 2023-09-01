#ifndef MAP
#define MAP

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <vector>

class Map
{
public:
    std::vector<std::vector<char>> map;

    void CreateMap();
    void ReadMap();


};

#endif 




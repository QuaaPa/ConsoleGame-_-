#ifndef RENDERING
#define RENDERING


#include <vector>
#include <iostream>
#include <string>
#include <windows.h>
#include <thread>
#include <chrono>
#include <fstream>

class Render
{

private:

    std::vector<std::vector<char>> map;

public:
    //set default map
    void SetMap(std::vector<std::vector<char>> map)
    {
        this->map = map;
    }

    void RenderMap(int PosX, int PosY, int width, int height);

};

#endif

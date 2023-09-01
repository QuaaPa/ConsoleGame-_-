#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <vector>
#include "Map/map.hpp"
#include "render/rendering.hpp"

int main()
{
    //Load default map from txt file "map.txt to vector "map" 
    Map defaultMap;
    defaultMap.ReadMap();

    Rendering window;
    window.setmap(defaultMap.map);

    window.renderMap();


    return 0;

}

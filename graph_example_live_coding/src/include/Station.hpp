#pragma once
#include <string>
#include <iostream>
#include <vector>

class Stap; //forward declaration (we beloven dat we egde implementeren)

class Station
{
public:
    std::string label;
    std::vector<Stap*> stappen;

    Station(std::string label);
    
    friend std::ostream &operator<<(std::ostream &os, Station& node);
};
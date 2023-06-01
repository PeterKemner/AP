#pragma once
#include "Station.hpp"

class Stap{
    public:
    
    Station* from;
    Station* to;
    int cost;

    Stap(Station* from, Station* to, int cost);

    friend std::ostream &operator<<(std::ostream& os, Stap& stap);
};
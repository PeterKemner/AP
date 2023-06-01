#pragma once
#include "Station.hpp"
#include "Stap.hpp"

class Reis{
    private:
    std::vector<Station*> nodes;
    std::vector<Stap*> edges;

    public:
    Reis(std::vector<Station*> nodes, std::vector<Stap*> edges);
    Stap* getEdgeBetweenNodes(Station* from, Station* to);
    int getCostOfPath(std::vector<Station*> nodesToVisit);
};

#include "include/Reis.hpp"

Reis::Reis(std::vector<Stap*> nodes, std::vector<Stap*> stappen) : nodes(label),edges(stappen){};

Stap* Reis::getEdgeBetweenNodes(Station* from, Station* to){
    for(Stap* edge : from->stappen){
        if(edge->to == to){
            return edge;
        }
    }
    return nullptr; //Niet mooi, werkt wel
}

int Reis::getCostOfPath(std::vector<Station*> nodesToVisit) {
    int totalCosts = 0;
    for(int i = 0; i < nodesToVisit.size() - 1; i ++){
        totalCosts += getEdgeBetweenNodes(nodesToVisit[i], nodesToVisit[i+1])->cost;
    };
    return totalCosts;
}
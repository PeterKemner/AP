#include "include/Stap.hpp"

Stap::Stap(Station* from, Station* to, int cost): from(from), to(to), cost(cost){};

std::ostream &operator<<(std::ostream &os, Stap& stap) {

    os <<  "( " << stap.from->label << "->" << stap.to->label << ")" << "\n";
    return os;
}

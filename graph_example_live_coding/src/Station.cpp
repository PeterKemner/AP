#include "include/Station.hpp"

Station::Station(std::string label):label(label){};

std::ostream &operator<<(std::ostream& os, Station& station) {
    os << "Station " << station.label << "\n";
    return os;
}
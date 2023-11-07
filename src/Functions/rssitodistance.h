#ifndef RSSITODISTANCE_H
#define RSSITODISTANCE_H
#include <iostream>
#include <vector>

struct Diziler {
    std::vector<double> distance1;
    std::vector<double> distance2;
    std::vector<double> distance3;
};

class RSSItoDistance
{
public:
    RSSItoDistance();

    Diziler ConvertRSSI(double rssi1, double rssi2, double rssi3);
};

#endif // RSSITODISTANCE_H

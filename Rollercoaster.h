//
// Created by josh on 03/08/18.
//

#ifndef ROLLERCOASTER_H
#define ROLLERCOASTER_H
#include <string>

class Rollercoaster {
public:
    Rollercoaster(std::string title = "no title", int mortality_rate = 0);
    std::string name;
    int mortality_rate;
    int GetSurvivalRate(void);
};


#endif //ROLLERCOASTER_H

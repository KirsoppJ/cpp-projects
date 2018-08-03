//
// Created by josh on 03/08/18.
//

#include "Rollercoaster.h"
Rollercoaster::Rollercoaster(std::string title, int mortality_rate) : name(title), mortality_rate(mortality_rate) {}
int Rollercoaster::GetSurvivalRate(void) {return 10 - mortality_rate;}
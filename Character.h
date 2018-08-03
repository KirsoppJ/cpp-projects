//
// Created by josh on 03/08/18.
//

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

class Character {
public:
    Character(std::string who = "anaonymous", int tall = 0, bool weetabix = 0);
    std::string name;
    int height;

    bool should_ride_rollercoaster();
private:
    bool destiny;
};


#endif //CHARACTER_H

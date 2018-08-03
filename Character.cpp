//
// Created by josh on 03/08/18.
//

#include "Character.h"
Character::Character(std::string who, int tall, bool weetabix) : name(who), height(tall), destiny(weetabix){}
bool Character::should_ride_rollercoaster() { return (height >= 160 and !destiny);}

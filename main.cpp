#include <iostream>
#include "Character.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Character.h"
#include "Rollercoaster.h"
void random_number(int &random_integer);

int main() {
    int random_integer;
    random_number(random_integer);
    bool john_heart;
    if (random_integer > 5) { john_heart = 1;}
    Character John("John", 160, john_heart);
    std::cout << John.name << " rides some rollercoasters. \n" << std::endl;


    {
        Rollercoaster teacups("Teacups", 2);
        std::cout << "First up... the " << teacups.name << "! \n" << std::endl;
        std::cout << "Survival rate of the " << teacups.name << " is " << teacups.GetSurvivalRate() << " times in 10. \n" << std::endl;
        if (random_integer > teacups.GetSurvivalRate() and !John.should_ride_rollercoaster()) {
            std::cout << "John died on the Teacups. Rock and Roll, John. \n" << std::endl;
            return 0;
        }
        std::cout << "Teacups? No problem. \n" << std::endl;
    }

    {
        Rollercoaster HelterSkelter("Helter Skelter", 8);
        std::cout << "Time for the " << HelterSkelter.name << "! \n" << std::endl;
        std::cout << "Survival rate of the "<< HelterSkelter.name << " is " << HelterSkelter.GetSurvivalRate() << " times in 10. \n" << std::endl;
        if(random_integer > HelterSkelter.GetSurvivalRate() and !John.should_ride_rollercoaster()) {
            std::cout << "Yeah, nah, he's had it." << std::endl;
            return 0;
        }
    }

    std::cout << John.name << " made it to the end of the day! Hurrah!" << std::endl;
    return 0;
}

void random_number(int &random_integer) {
    std::srand((unsigned) time(0));
    random_integer = (rand() % 10) + 1;
   // std::cout << "random integer = " << random_integer << std::endl;
}
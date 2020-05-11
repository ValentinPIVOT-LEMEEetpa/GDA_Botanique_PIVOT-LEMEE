#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Vege.h"

class Player{
    private:
        std::string _playerName;

    public:
    void coupage(Vege * cible);
    void nourrir(Vege * cible);
    void arrosage(Vege * cible);

    Pleyer(std:: string playerName);
};
#endif
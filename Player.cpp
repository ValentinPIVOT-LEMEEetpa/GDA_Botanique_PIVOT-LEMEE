#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <string>
#include "Player.h"
#include "Vege.h"

// std::string _playerName;
  
  
    void Player::coupage(Vege * cible){
        cible->coupe(1);
    }
    
    void Player::nourrir(Vege * cible){
        cible->angrais(1);
    }
    
    void Player::arrosage(Vege * cible){
        cible->pouasse(1);    
    }
    
    
    Player::Player(std::string nomPlayer): _playerName(nomPlayer) {}
    
#endif
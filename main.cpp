#include <iostream>
#include "Plante.h"
#include "Player.h"

int main(){
    char choix_player;
    char day = 1;

    
    Plante * plante = new Plante ("X Æ A-12");
    plante ->afficher();

    Player * botaniste = new Player ("Elon");

    while (_mature < 0)
    {
        plante ->afficher();
        while(day != +1){
            cin >>  choix_player;
            switch (choix_player)
            {
            case 1:
                return maturite();
            break;
            case 2:
                return angrais();
            break;
            case 3:
                return pousse();
            break;
            case 4:
                return coupe();
            break;
            case 5:
                day+=1;

            }
        }
        if(_mature = 0) std::cout << "t'as plante est morte " << std::endl;
    }
    
}
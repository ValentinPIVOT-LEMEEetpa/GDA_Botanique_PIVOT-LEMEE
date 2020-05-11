#ifndef Animal_CPP
#define Animal_CPP

#include <iostream>
#include "Animal.h"

/*    int _ennui; int _fatigue; int _faim; std::string _nom; */
  

    void Vege::coupe(int _taille){    }
    
    void Vege::angrais(){    }
    
    void Vege::pousse(int eau){    }

    void Vege::maturite(){    }
    
    void Vege::afficher(){
        std::cout << _nom <<" est une plante de type plante. Sa maturité est de "
        <<_mature<<"/20, son niveau d'eau est de " <<_arrosage<<"/10, sa taille est de "
        <<_taille<<" ,si elle est en dessous de 4 il faut la nourrire, si elle est au dessus de 8 il faut la tailler"<< std::endl;
        
    }
    
    Vege::Vege(std::string name) : _nom(name), _mature(1), _angrais(1), _arrosage(1), _taille(1)  {}

#endif
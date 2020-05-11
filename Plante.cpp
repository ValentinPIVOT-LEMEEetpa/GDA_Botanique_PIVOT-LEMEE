#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <iostream>
#include "Plante.h"
#include "Vege.h"

    void Plante::maturite(){
        _mature += 1;
        _arrosage -=10;
        _taille +=1;
        if(_mature > 20) //mort
    }

    void Plante::angrais(){
        _angrais -= 1;
        if(_angrais <0) _angrais = 0;
        _mature -= 1;
        _taille += 1;
    }

    void Plante::pousse(int eau){
        eau += 2;
        if( eau >10) _mature -= 1;
    }

    void Plante::coupe(int _taille);{
        _taille -= 2;
        if(_taille >4 && _taille < 8) _mature -=1;

    }

    void Plante::afficher(){
        std::cout << _nom <<" est une plante de type plante. Sa maturité est de "
        <<_mature<<"/20, son niveau d'eau est de " <<_arrosage<<"/10, sa taille est de "
        <<_taille<<" ,si elle est en dessous de 4 il faut la nourrire, si elle est au dessus de 8 il faut la tailler"<< std::endl;
        
        if(_mature<0) _mature = 0;
    }
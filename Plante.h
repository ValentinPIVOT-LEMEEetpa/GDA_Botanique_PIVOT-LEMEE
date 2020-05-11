#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include "Vege.h"

class Plante : public Vege{

    public:
        void maturite();
        void angrais();
        void pousse(int eau);
        void coupe(int _taille);
        void afficher();

        Plante(std:: string name);

};
#endif
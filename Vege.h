#ifndef VEGE_H
#define VEGE_H

#include<string>

class Vege{
    protected:
        int _mature;
        int _angrais;
        int _arrosage;
        int _taille;
        std::string _nom;
    
    public:

        void virtual pousse(int eau);
        void virtual coupe(int ciseaux);

        void afficher();

        Vege(std::string name);
};
#endif
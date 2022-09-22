#include "moteur.h"
#include "MccUldaq.h"

Moteur::Moteur(const MccUldaq &_laCarte, const int _numCanal, const double _tensionMaxCommande) :
    numCanal(numCanal),
    tensionMaxCommande(tensionMaxCommande),
    laCarte(_laCarte)
{

}
Moteur::~Moteur()
{
    cout <<"Destructeur Moteur" << endl;
}

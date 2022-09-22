#include "codeur.h"

Codeur::Codeur(const MccUldaq & _laCarte):
    laCarte(_laCarte)
{

}

Codeur::~Codeur()
{
    cout <<"Destructeur Moteur"<< endl;
}

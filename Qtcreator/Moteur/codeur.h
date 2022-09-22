#ifndef CODEUR_H
#define CODEUR_H
#include "mcculdaq.h"


class Codeur
{
private:
    const MccUldaq & laCarte;
public:
    Codeur(const MccUldaq & _laCarte);
    int ObtenirVitesse();
    ~Codeur();
};

#endif // CODEUR_H

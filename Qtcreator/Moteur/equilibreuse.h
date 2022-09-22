#ifndef EQUILIBREUSE_H
#define EQUILIBREUSE_H
#include "mcculdaq.h"
#include "moteur.h"
class Equilibreuse
{
private:
MccUldaq laCarte;
Moteur *leMoteur;
Moteur *leCodeur;
public:
Equilibreuse();
};
#endif // EQUILIBREUSE_H

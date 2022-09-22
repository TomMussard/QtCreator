#include "equilibreuse.h"

Equilibreuse::Equilibreuse():
    laCarte("carte magique")
{
    leCodeur = new Moteur(laCarte);
leMoteur = new Moteur(laCarte,5,4,0);
}

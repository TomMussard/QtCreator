#include "code.h"

code::code(const int _tailleCode):
    tailleCode(_tailleCode)
{
    codeUsine = new quint8[tailleCode];
    codeUtilisateur = new quint8[tailleCode];
    for(int indice = 0  ; indice < tailleCode ; indice++)
    {
        codeUsine[indice] = indice+1;
        codeUtilisateur[indice] = 0;
    }
}

bool code::VerifierCode(const quint8 _unCode[])
{
    bool retour = true;
    for(int indice = 0 ;indice < tailleCode ; indice++)
    {
        if(codeUtilisateur[indice] != _unCode[indice])
            retour = false;
    }
    if(retour == false)
    {
        retour = true;
        for(int indice = 0 ;indice < tailleCode ; indice++)
        {
            if(codeUsine[indice] != _unCode[indice])
                retour = false;
        }
    }
    return retour;
}

void code::Memoriser(const quint8 _unCode[])
{
    for(int indice = 0 ; indice < tailleCode ; indice++)
        codeUtilisateur[indice] = _unCode[indice];
}

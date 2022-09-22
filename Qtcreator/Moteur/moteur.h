#ifndef MOTEUR_H
#define MOTEUR_H
class MccUldaq;
class Moteur
{
private:
    int numCanal ;
    double tensionMaxCommande ;
    const MccUldaq & laCarte;

public:
    Moteur(const MccUldaq & _laCarte, const int _numCanal, const double _tensionMaxCommande);
    ~Moteur();
    void Demarrer();
    void Arreter();
    void FixerConsigne(const int _laConsigne);
};
#endif // MOTEUR_H

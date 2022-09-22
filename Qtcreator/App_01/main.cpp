#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <ofstream>

using namespace std;

int main() {

    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()); // c_str() transforme string en char*
    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;
        cout << "+" << setfill('-') << setw(40) << "+" << setfill(' ') << endl;
        do
        {
            //récupération des valeurs
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                cout << "|" << setw(15) << left << pays << "|" << setw(7) << left << nbOr << "|" << setw(7) << left << nbArgent << "|" << setw(7) << left << nbBronze << "|" << endl;
            }
        } while (!leFichier.eof());
        cout << "+" << setfill('-') << setw(40) << "+" << setfill(' ') << endl;
    }
    return 0;
}

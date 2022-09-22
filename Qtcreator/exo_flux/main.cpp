#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//LECTURE//
int main()
{
    float temperature (0.0);  // lorsque les valeurs numériques sont pas respectées les valeurs par défaut sont utilisées
    float humidite (0.0);
    int pression (1024);

    cout << "Saisir la température, l'humidité et la pression : " ;
    cin >> temperature >> humidite >> pression ;

    cout << "la température est : " << temperature << " °" << endl;
    cout << "le taux d'humidité est : " << humidite << " %" << endl;
    cout << "la pression est : " << pression << " hPa" << endl ;

    return 0;
}

//CHAINEDE CARACTERE//


int main()
{
char phrase[10+1];
cout << "Saisir une phrase : " ;
cin.getline( phrase, 10);
cout << "Votre phrase est :" << phrase << endl;
return 0;
}



//MANIPULATEUR//

int main()
{
int val = 192;
cout << "Affichage par défaut : " << val << endl;
cout << "Affichage en hexadécimal : " << hex << val << endl;
cout << "Affichage en décimal : " << dec << val << endl;
return 0;
}

//MANIPULATEUR 2//

int main()
{
    int val = 192;
    float val2 = 3.141592654;
    bool sortie = true;
    cout << "Affichage par défaut : " << val << endl;
    cout << "Affichage en hexadécimal : " << hex << val << endl;
    cout << "Affichage en décimal : " << dec << val << endl;
    cout << hex << val << " " << uppercase << val << " " ;
    cout << showbase << val << nouppercase << " " << val << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << "|" << setw(20) << left << "abc" << "|" << endl;
    cout << "|" << setw(20) << right << "abc" << "|" << endl;
    cout << "+" << setfill('-') << setw(21) << "+" << setfill(' ') << endl;
    cout << dec << sortie << " " << boolalpha << sortie << endl;
    cout << val2 << " " << fixed << val2 << " " << scientific << val2 << " ";
    cout << fixed << setprecision(2) << val2 << endl;
    cout << "Entrez un nombre en octal : " ;
    cin >> oct >> val ;
    cout << "vous avez saisie " << dec << val << " en décimal" << endl;
    return 0;
}


//lecture fichier//

int main()
{
    string motCle ;
    // string remplace un tableau de caractères. la taille de la chaîne est dynamique
    int valeur;
    ifstream fichier("config.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        do
        {
            // le fichier contient sur chaque ligne des couples mot clé + valeur
            fichier >> motCle >> valeur ;
            if (fichier.good())//Si les valeurs ont bien été lues
            {
                cout << motCle << " " << valeur<< endl; // traitement des variables motCle et valeur
            }
        } while(!fichier.eof());
    }
    return 0 ;
}

#include <iostream>
#include "Instrument.hpp"
#include "Piano.hpp"
#include "Guitare.hpp"
#include "Harpe.hpp"
#include <windows.h>

using namespace std;

int main()
{
    cout << "Bonjour et bienvenue sur notre simulateur interactif de musique." << endl;
    cout << "Vous avez le choix entre :" << endl << "1. Jouer de la musique" << endl << "2. Jouer une partition deja enregistree" << endl;
    int choix1;
    cin >> choix1;

    if (choix1 == 1) //Jouer un instrument
    {
        cout << endl << "Vous pouvez jouez un instrument parmis les suivants :" << endl;
        cout << "1. Guitare" << endl << "2. Piano" << endl << "3. Harpe" << endl;
        int instrument;
        cin >> instrument;
        system("cls");

        shared_ptr<Instrument> Instrument_definie;

        if (instrument == 1) //Guitare
        {
            cout << "Vous avez choisi la guitare." << endl;

            Instrument_definie = make_shared<Guitare>();
            //guitare->Joue();

        }
        else if (instrument == 2) //Piano
        {
            cout << "Vous avez choisi le piano." << endl;

            Instrument_definie = make_shared<Piano>();
            //piano->Joue();
        }
        else if (instrument == 3) //Harpe
        {
            cout << "Vous avez choisi la harpe." << endl;

            Instrument_definie = make_shared<Harpe>();
            //harpe->Joue();
        }
        else { //Erreur
            cout << "Il y a une erreur dans le choix de l'instrument" << endl;
        }

        Instrument_definie->Joue();


    }
    else if (choix1 == 2) //Jouer une partition
    {

    }
    else //Erreur
    {
        cout << "Erreur lors de la selection !" << endl;
    }
}

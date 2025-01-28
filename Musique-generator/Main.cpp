#include <iostream>
#include "Instrument.hpp"
#include "Piano.hpp"
#include "Guitare.hpp"
#include "Harpe.hpp"
#include <windows.h>


using namespace std;

void Joue(shared_ptr<Instrument> instrument)
{
    cout << "Vous avez choisit l'instrument suivant : " << instrument->get_nom() << endl;
    // Définir la touche que l'on veut assigner
    const int Do = 0x41; // Touche A
    const int Re = 0x5A; // Touche Z
    const int Mi = 0x45; // Touche E
    const int Fa = 0x52; // Touche R
    const int Sol = 0x54; // Touche T
    const int La = 0x59; // Touche Y
    const int Si = 0x55; // Touche U
    const int Stop = 0x1B; // Touche Échap

    bool running = true;
    while (running) {
        // Vérifier l'état de la touche
        short etat_Do = GetAsyncKeyState(Do);
        short etat_Re = GetAsyncKeyState(Re);
        short etat_Mi = GetAsyncKeyState(Mi);
        short etat_Fa = GetAsyncKeyState(Fa);
        short etat_Sol = GetAsyncKeyState(Sol);
        short etat_La = GetAsyncKeyState(La);
        short etat_Si = GetAsyncKeyState(Si);
        short etat_Stop = GetAsyncKeyState(Stop);

        // Si la touche est enfoncée
        if (etat_Do < 0) {
            instrument->Joue("Do");
        }

        if (etat_Re < 0) {
            instrument->Joue("Re");;
        }

        if (etat_Mi < 0) {
            instrument->Joue("Mi");
        }

        if (etat_Fa < 0) {
            instrument->Joue("Fa");
        }

        if (etat_Sol < 0) {
            instrument->Joue("Sol");
        }

        if (etat_La < 0) {
            instrument->Joue("La");
        }

        if (etat_Si < 0) {
            instrument->Joue("Si");
        }

        if (etat_Stop < 0) {
            cout << "Merci d'avoir jouer." << endl;
            running = false;
        }
    }
    Sleep(1);
}

int main()
{
    bool running = true;

    while (running)
    {
        cout << "Bonjour et bienvenue sur notre simulateur interactif de musique." << endl;
        cout << "Vous avez le choix entre :" << endl << "1. Jouer de la musique" << endl << "2. Jouer une partition deja enregistree" << endl;
        int choix1;
        cin >> choix1;

        if (choix1 == 1) //Jouer un instrument
        {
            cout << "A quelle vitesse voulez-vous jouer de la musique ?" << endl << "1. Lentemement " << endl << "2. Normale" << endl << "3. Rapide" << endl;
            int vitesse;
            cin >> vitesse;

            bool ok = false;
            shared_ptr<Instrument> Instrument_definie;

            while (ok == false)
            {
                cout << endl << "Vous pouvez jouez un instrument parmis les suivants :" << endl;
                cout << "1. Guitare" << endl << "2. Piano" << endl << "3. Harpe" << endl;
                int instrument;
                cin >> instrument;

                system("cls");

                if (instrument == 1) //Guitare
                {
                    Instrument_definie = make_shared<Guitare>("Guitare", 200);
                }
                else if (instrument == 2) //Piano
                {
                    Instrument_definie = make_shared<Piano>("Piano", 200);
                }
                else if (instrument == 3) //Harpe
                {
                    Instrument_definie = make_shared<Harpe>("Harpe", 200);
                }
                else { //Erreur
                    cout << "Il y a une erreur dans le choix de l'instrument" << endl << endl;
                    continue;
                }
                ok = true;
            }

            Joue(Instrument_definie);


        }
        else if (choix1 == 2) //Jouer une partition
        {
            cout << "Nous pouvons vous jouer les morceaux suivants :" << endl << "1. Mario" << endl << "2. Star Wars" << endl;
            int fichier;
            cin >> fichier;

            system("cls");

            if (fichier == 1)
            {
                cout << "Voici le morceau de Mario" << endl;
            }
            else if (fichier == 2)
            {
                cout << "Voici le morceau de Star Wars" << endl;
            }
            else
            {
                cout << "Erreur lors du choix de la chanson" << endl;
            }
        }
        else //Erreur
        {
            cout << "Erreur lors de la selection !" << endl;
        }

        cout << "Voulez-vous continuer a utiliser notre generateur de musique intercatif ? O/N" << endl;
        char replay;
        cin >> replay;

        if (replay == 'N')
        {
            running = false;
        }
        else if (replay == 'O')
        {
            continue;
        }
        else {
            cout << "Erreur lors du choix. Arret du generateur de musique." << endl << "A bientot." << endl << endl;
            running = false;
        }
    }
}

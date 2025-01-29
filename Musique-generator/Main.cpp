#include <iostream>
#include "Instrument.hpp"
#include "Piano.hpp"
#include "Guitare.hpp"
#include "Harpe.hpp"
#include "Partition.hpp"
#include <windows.h>
#include <conio.h>

using namespace std;

void Joue(shared_ptr<Instrument> instrument, int vitesse)
{
    bool running = true;

    cout << "Vous avez choisit l'instrument suivant : " << instrument->get_nom() << endl << endl;

    instrument->AfficheArt();

    
    while (running)
    {
        if (_kbhit()) {
            char touche = _getch();

            // Fait la détection des touches
            switch (touche) {
            case 'a':
                instrument->Joue("Do",vitesse);
                break;
            case 'z': 
                instrument->Joue("Re", vitesse);
                break;
            case 'e': 
                instrument->Joue("Mi", vitesse);
                break;
            case 'r':
                instrument->Joue("Fa", vitesse);
                break;
            case 't':
                instrument->Joue("Sol", vitesse);
                break;
            case 'y': 
                instrument->Joue("La", vitesse);
                break;
            case 'u': 
                instrument->Joue("Si", vitesse);
                break;
            case 'q':
                running = false;
                return;
            }
        }
    }

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

            if (vitesse < 1 || vitesse > 3)
            {
                cout << "erreur lors du choix de la vitesse." << endl;
                continue;
            }

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
                    Instrument_definie = make_shared<Guitare>("Guitare");
                }
                else if (instrument == 2) //Piano
                {
                    Instrument_definie = make_shared<Piano>("Piano");
                }
                else if (instrument == 3) //Harpe
                {
                    Instrument_definie = make_shared<Harpe>("Harpe");
                }
                else { //Erreur
                    cout << "Il y a une erreur dans le choix de l'instrument" << endl << endl;
                    continue;
                }
                ok = true;
            }
     
            Joue(Instrument_definie, (4-vitesse) * 200);

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
                shared_ptr<Partition> Instance;
                Instance->Joue("Mario");

            }
            else if (fichier == 2)
            {
                cout << "Voici le morceau de Star Wars" << endl;
                shared_ptr<Partition> Instance;
                Instance->Joue("Star Wars");
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
            cout << endl << "A bientot" << endl;
        }
        else if (replay == 'O')
        {
            system("cls");
            continue;
        }
        else {
            system("cls");
            cout << "Erreur lors du choix. Arret du generateur de musique." << endl << "A bientot." << endl << endl;
            running = false;
        }
    }
}

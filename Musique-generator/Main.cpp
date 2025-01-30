#include <iostream>
#include "Instrument.hpp"
#include "Piano.hpp"
#include "Guitare.hpp"
#include "Harpe.hpp"
#include "Partition.hpp"
#include <windows.h>
#include <conio.h>

using namespace std;

//Fonction qui prend un pointeur instrument et une vitesse d'éxécution
//Joue la musique intéractive
void Joue(shared_ptr<Instrument> instrument, int vitesse)
{
    bool running = true;
    cout << "Vous avez choisit l'instrument suivant : " << instrument->get_nom() << endl << endl;
    instrument->AfficheArt();
    
    while (running)
    {
        if (_kbhit()) { // Si une touche est détectée
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
                running = false; // Arrête le programme
                return;
            }
        }
    }

}

int main()
{
    bool running = true;

    while (running) // Boucle qui tourne du début a la fin du programme
    {
        cout << "Bonjour et bienvenue sur notre simulateur interactif de musique." << endl;
        cout << "Vous avez le choix entre :" << endl << "1. Jouer de la musique" << endl << "2. Jouer une partition deja enregistree" << endl;
        // Choix de l'action      1 ou 2
        int choix1;
        cin >> choix1;

        if (choix1 == 1) //Jouer un instrument
        {
            // Choix de la vitesse des notes      1,2 ou 3
            cout << "A quelle vitesse voulez-vous jouer de la musique ?" << endl << "1. Lentemement " << endl << "2. Normal" << endl << "3. Rapide" << endl;
            int vitesse;
            cin >> vitesse;

            if (vitesse < 1 || vitesse > 3) // Erreur sur le choix de la vitesse
            {
                cout << "erreur lors du choix de la vitesse." << endl;
                continue;
            }

            bool ok = false;
            // Polymorphisme avec un instrument 
            shared_ptr<Instrument> Instrument_definie;

            while (ok == false)
            {
                // Choix de l'instrument       1,2 ou 3
                cout << endl << "Choisissez un instrument :" << endl;
                cout << "1. Guitare" << endl << "2. Piano" << endl << "3. Harpe" << endl;
                int instrument;
                cin >> instrument;

                system("cls");

                // Partie qui gère le polymorsphisme en donnant le bon instrument
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
                else { //Erreur donc boucle encore
                    cout << "Il y a une erreur dans le choix de l'instrument" << endl << endl;
                    continue;
                }
                ok = true; // Arrête la boucle quand l'instrument est bon
            }
            
            // Appel la fonction d'au dessus en donnant l'instrument et la vitesse sélectioné
            // Vitesse est donc de 200,400 ou 600
            Joue(Instrument_definie, (4-vitesse) * 200);

        }
        else if (choix1 == 2) //Jouer une partition
        {
            // Proposition des chansons
            cout << "Nous pouvons vous jouer les morceaux suivants :" << endl << "1. Mario" << endl << "2. Star Wars" << endl;
            int fichier;
            cin >> fichier;

            system("cls");

            if (fichier == 1) // Si le choix est 1, donc Mario
            {
                cout << "Voici le morceau de Mario" << endl;
                shared_ptr<Partition> Partition; // Création de l'objet Partition
                Partition->Joue("Mario"); // Appel de la fonction Joue de la classe Partition avec le string "Mario" en argument

            }
            else if (fichier == 2) // Si le choix est 2, donc Star Wars
            {
                cout << "Voici le morceau de Star Wars" << endl;
                shared_ptr<Partition> Partition;
                Partition->Joue("Star Wars");
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

        //Partie qui s'occupe de demmander a l'utilisateur si il veux rejouer ou non
        cout << "Voulez-vous continuer a utiliser notre generateur de musique intercatif ? y/n" << endl;
        char replay;
        cin >> replay;

        if (replay == 'n') // Ne veux plus continuer de jouer
        {
            running = false; // Arret de la boucle while avec running = false
            cout << endl << "A bientot" << endl;
        }
        else if (replay == 'y') // Veux continuer de jouer
        {
            system("cls");
            continue;
        }
        else { // Erreur dans la reponse donc arret du jeu avec running = false
            system("cls");
            cout << "Erreur lors du choix. Arret du generateur de musique." << endl << "A bientot." << endl << endl;
            running = false;
        }
    }
}

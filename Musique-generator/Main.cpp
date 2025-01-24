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

    if (choix1 == 1) //Jouer un intrument
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


            // Définir la touche que l'on veut assigner
            const int Do = 0x41; // Touche A
            const int Re = 0x5A; // Touche Z
            const int Mi = 0x45; // Touche E
            const int Fa = 0x52; // Touche R
            const int Sol = 0x54; // Touche T
            const int La = 0x59; // Touche Y
            const int Si = 0x55; // Touche U


            while (true) {
                // Vérifier l'état de la touche
                short etat_Do = GetAsyncKeyState(Do);
                short etat_Re = GetAsyncKeyState(Re);
                short etat_Mi = GetAsyncKeyState(Mi);
                short etat_Fa = GetAsyncKeyState(Fa);
                short etat_Sol = GetAsyncKeyState(Sol);
                short etat_La = GetAsyncKeyState(La);
                short etat_Si = GetAsyncKeyState(Si);

                // Si la touche est enfoncée
                if (etat_Do < 0) {
                    // Exécuter l'action
                    printf("Touche A enfoncee !, note : Do\n");
                }

                // Si la touche est enfoncée
                if (etat_Re < 0) {
                    // Exécuter l'action
                    printf("Touche Z enfoncee !, note : Re\n");
                }

                // Si la touche est enfoncée
                if (etat_Mi < 0) {
                    // Exécuter l'action
                    printf("Touche E enfoncee !, note : Mi\n");
                }

                // Si la touche est enfoncée
                if (etat_Fa < 0) {
                    // Exécuter l'action
                    printf("Touche R enfoncee !, note : Fa\n");
                }

                // Si la touche est enfoncée
                if (etat_Sol < 0) {
                    // Exécuter l'action
                    printf("Touche T enfoncee !, note : Sol\n");
                }

                // Si la touche est enfoncée
                if (etat_La < 0) {
                    // Exécuter l'action
                    printf("Touche Y enfoncee !, note : La\n");
                }

                // Si la touche est enfoncée
                if (etat_Si < 0) {
                    // Exécuter l'action
                    printf("Touche U enfoncee !, note : Si\n");
                }

                // Attendre un peu pour ne pas consommer trop de ressources
                Sleep(10);
            }


        }
        else if (instrument == 2) //Piano
        {
            cout << "Vous avez choisi le piano." << endl;
        }
        else if (instrument == 3) //Harpe
        {
            cout << "Vous avez choisi la harpe." << endl;
        }
        else { //Erreur
            cout << "Il y a une erreur dans le choix de l'instrument" << endl;
        }


    }
    else if (choix1 == 2) //Jouer une partition
    {

    }
    else //Erreur
    {
        cout << "Erreur lors de la selection !" << endl;
    }
}

#include "Guitare.hpp"
#include <windows.h>
#include <iostream>
using namespace std;

Guitare::Guitare()
{
}

Guitare::Guitare(int f) : Instrument()
{
	m_frequence = f;
}

void Guitare::Joue()
{
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
            // Exéc!uter l'action
            printf("Do  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Re < 0) {
            // Exécuter l'action
            printf("Re  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Mi < 0) {
            // Exécuter l'action
            printf("Mi  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Fa < 0) {
            // Exécuter l'action
            printf("Fa  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Sol < 0) {
            // Exécuter l'action
            printf("Sol  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_La < 0) {
            // Exécuter l'action
            printf("La  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Si < 0) {
            // Exécuter l'action
            printf("Si  -->  Guitare\n");
        }

        // Si la touche est enfoncée
        if (etat_Stop < 0) {
            // Exécuter l'action
            printf("Merci d'avoir jouer de la guitare.");
            running = false;
        }

        // Attendre un peu pour ne pas consommer trop de ressources
        Sleep(10);
    }
}

#include "Piano.hpp"
#include <Windows.h>
#include <iostream>

using namespace std;

Piano::Piano()
{
}

Piano::Piano(string n, string v) : Instrument(n,v)
{
}

void Piano::Joue()
{
    // D�finir la touche que l'on veut assigner
    const int Do = 0x41; // Touche A
    const int Re = 0x5A; // Touche Z
    const int Mi = 0x45; // Touche E
    const int Fa = 0x52; // Touche R
    const int Sol = 0x54; // Touche T
    const int La = 0x59; // Touche Y
    const int Si = 0x55; // Touche U
    const int Stop = 0x1B; // Touche �chap

    bool running = true;
    while (running) {
        // V�rifier l'�tat de la touche
        short etat_Do = GetAsyncKeyState(Do);
        short etat_Re = GetAsyncKeyState(Re);
        short etat_Mi = GetAsyncKeyState(Mi);
        short etat_Fa = GetAsyncKeyState(Fa);
        short etat_Sol = GetAsyncKeyState(Sol);
        short etat_La = GetAsyncKeyState(La);
        short etat_Si = GetAsyncKeyState(Si);
        short etat_Stop = GetAsyncKeyState(Stop);

        // Si la touche est enfonc�e
        if (etat_Do < 0) {
            // Ex�c!uter l'action
            printf("Do  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Re < 0) {
            // Ex�cuter l'action
            printf("Re  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Mi < 0) {
            // Ex�cuter l'action
            printf("Mi  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Fa < 0) {
            // Ex�cuter l'action
            printf("Fa  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Sol < 0) {
            // Ex�cuter l'action
            printf("Sol  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_La < 0) {
            // Ex�cuter l'action
            printf("La  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Si < 0) {
            // Ex�cuter l'action
            printf("Si  -->  Piano\n");
        }

        // Si la touche est enfonc�e
        if (etat_Stop < 0) {
            // Ex�cuter l'action
            printf("Merci d'avoir jouer du piano.");
            running = false;
        }

        // Attendre un peu pour ne pas consommer trop de ressources
        Sleep(10);
    }
}

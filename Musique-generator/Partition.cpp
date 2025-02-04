#include "Partition.hpp"
#include <map>
#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

Partition::Partition()
{
}

Partition::~Partition()
{
}

int Partition::Return_note(string note)
{
    map<string, int> note_to_frequency = {
    {"B0", 31}, {"C1", 33}, {"C#1", 35}, {"D1", 37}, {"D#1", 39}, {"E1", 41}, {"F1", 44}, {"F#1", 46}, {"G1", 49}, {"G#1", 52},
    {"A1", 55}, {"A#1", 58}, {"B1", 62}, {"C2", 65}, {"C#2", 69}, {"D2", 73}, {"D#2", 78}, {"E2", 82}, {"F2", 87}, {"F#2", 93},
    {"G2", 98}, {"G#2", 104}, {"A2", 110}, {"A#2", 117}, {"B2", 123}, {"C3", 131}, {"C#3", 139}, {"D3", 147}, {"D#3", 156},
    {"E3", 165}, {"F3", 175}, {"F#3", 185}, {"G3", 196}, {"G#3", 208}, {"A3", 220}, {"A#3", 233}, {"B3", 247}, {"C4", 262},
    {"C#4", 277}, {"D4", 294}, {"D#4", 311}, {"E4", 330}, {"F4", 349}, {"F#4", 370}, {"G4", 392}, {"G#4", 415}, {"A4", 440},
    {"A#4", 466}, {"B4", 494}, {"C5", 523}, {"C#5", 554}, {"D5", 587}, {"D#5", 622}, {"E5", 659}, {"F5", 698}, {"F#5", 740},
    {"G5", 784}, {"G#5", 831}, {"A5", 880}, {"A#5", 932}, {"B5", 988}, {"C6", 1047}, {"C#6", 1109}, {"D6", 1175}, {"D#6", 1245},
    {"E6", 1319}, {"F6", 1397}, {"F#6", 1480}, {"G6", 1568}, {"G#6", 1661}, {"A6", 1760}, {"A#6", 1865}, {"B6", 1976},
    {"C7", 2093}, {"C#7", 2217}, {"D7", 2349}, {"D#7", 2489}, {"E7", 2637}, {"F7", 2794}, {"F#7", 2960}, {"G7", 3136},
    {"G#7", 3322}, {"A7", 3520}, {"A#7", 3729}, {"B7", 3951}, {"C8", 4186}, {"C#8", 4435}, {"D8", 4699}, {"D#8", 4978}
    };

    if (note_to_frequency.count(note) > 0) {
        return note_to_frequency.at(note);
    }
    return 0;
}

void Partition::Joue(string musique)
{
    string notes_star_wars[] = {
    "A#1", "0", "A#1", "0", "A#1", "0", "F2", "0", "C2", "0","A#2", "0", "A2", "0", "G2", "0", "F1", "0", "C1", "0","A#2", "0", "A2", "0", "G2", "0", "F1", "0", "C1", "0","A#2", "0", "A2", "0", "G2", "0", "F1", "0", "C1", "0",
    "A#2", "0", "A2", "0", "A#2", "0", "G2", "0", "C1", "0","C1", "0", "C1", "0", "F2", "0", "C2", "0", "A#2", "0","A2", "0", "G2", "0", "F1", "0", "C1", "0", "A#2", "0","A2", "0", "G2", "0", "F1", "0", "C1", "0", "A#2", "0",
    "A2", "0"
    };

    double duree_star_wars[] = {
        0.125, 0.1625, 0.125, 0.1625, 0.125, 0.1625, 0.25, 0.325, 0.125, 0.1625,0.25, 0.325, 0.25, 0.325, 0.125, 0.1625, 0.0625, 0.08125, 0.25, 0.325,0.25, 0.325, 0.25, 0.325, 0.125, 0.1625, 0.0625, 0.08125, 0.25, 0.325,0.25, 0.325, 0.25, 0.325, 0.125, 0.1625, 0.0625, 0.08125, 0.25, 0.325,
        0.25, 0.325, 0.25, 0.325, 0.25, 0.325, 0.25, 0.325, 0.25, 0.325,0.25, 0.325, 0.25, 0.325, 0.25, 0.325, 0.25, 0.325, 0.125, 0.1625,0.25, 0.325, 0.25, 0.325, 0.125, 0.1625, 0.0625, 0.08125, 0.25, 0.325,0.25, 0.325, 0.25, 0.325, 0.125, 0.1625, 0.0625, 0.08125, 0.25, 0.325,
        0.25, 0.325, 0.25, 0.325
    };

    string notes_mario[] = {
        "0", "0", "E7", "0", "0", "0", "E7", "0", "0", "0","C7", "0", "E7", "0", "0", "0", "G7", "0", "0", "0","0", "0", "0", "0", "G6", "0", "0", "0", "0", "0","0", "0", "C7", "0", "0", "0", "0", "0", "G6", "0",
        "0", "0", "0", "0", "E6", "0", "0", "0", "0", "0","A6", "0", "0", "0", "B6", "0", "0", "0", "A#6", "0","A6", "0", "0", "0", "G6", "0", "E7", "0", "G7", "0","A7", "0", "0", "0", "F7", "0", "G7", "0", "0", "0",
        "E7", "0", "0", "0", "0", "0", "C7", "0", "D7", "0","B6", "0", "0", "0", "0", "0", "C7", "0", "0", "0","0", "0", "G6", "0", "0", "0", "0", "0", "E6", "0","0", "0", "0", "0", "A6", "0", "0", "0", "B6", "0",
        "0", "0", "A#6", "0", "A6", "0", "0", "0", "G6", "0","E7", "0", "G7", "0", "A7", "0", "0", "0", "F7", "0","G7", "0", "0", "0", "E7", "0", "0", "0", "C7", "0","D7", "0", "B6", "0", "0", "0", "0", "0", "0"
    };

    double duree_mario[] = {
        0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,
        0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,
        0.111, 0.111, 0.111, 0.111, 0.111, 0.111, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.166, 0.166, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,
        0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.111, 0.111, 0.111, 0.111,
        0.111, 0.111, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083,0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.083, 0.000
    };

    if (musique == "Mario")
    {
        Joue_Musique(notes_mario,duree_mario,size(notes_mario));
    }
    else if (musique == "Star Wars")
    {
        Joue_Musique(notes_star_wars, duree_star_wars, size(notes_star_wars));
    }
}

void Partition::Joue_Musique(string* notes, double duree[], int taille)
{
    for (int i = 0; i < taille; i++) {
        int duree_ms = static_cast<int>(duree[i] * 750);

        if (notes[i] == "0")
        {
            Sleep(duree_ms);
            continue;
        }
        Beep(Return_note(notes[i]), duree_ms);
    }
}

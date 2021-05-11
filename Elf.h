//
// Created by Wridzer on 26/04/2021.
//

#pragma once

#include "NPC.h"
#include <string>


class Elf : public NPC{
public:
    Elf(std::string _charName, int _charStrength, std::string _favoriteSnack);

    std::string getSnack();
    std::string snack;
    std::string name;
    int strength;
};


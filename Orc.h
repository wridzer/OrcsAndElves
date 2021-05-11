//
// Created by Wridzer on 26/04/2021.
//

#pragma once

#include "NPC.h"
#include <string>

class Orc : public NPC{
public:
    Orc(std::string charName, int charStrength, std::string favoriteAnimal) : NPC(charName, charStrength) {};

    std::string getAnimal();
    std::string animal;
};


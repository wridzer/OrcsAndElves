//
// Created by Wridzer on 26/04/2021.
//

#pragma once

#include "NPC.h"
#include <string>
#include <iostream>

class Orc : public NPC{
public:
    Orc(std::string _charName, int _charStrength, std::string _favoriteAnimal);

    std::string getAnimal();
    std::string animal;
    std::string name;
    int strength;
};


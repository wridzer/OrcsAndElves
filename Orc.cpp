//
// Created by Wridzer on 26/04/2021.
//

#include "Orc.h"
#include <string>

Orc::Orc(std::string charName, int charStrength, std::string _favoriteAnimal) : NPC(charName, charStrength) {
    animal = _favoriteAnimal;
}

std::string Orc::getAnimal() {
    return animal;
}
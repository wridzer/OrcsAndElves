//
// Created by Wridzer on 26/04/2021.
//

#include "Elf.h"
#include <string>

Elf::Elf(std::string _charName, int _charStrength, std::string _favoriteSnack) : NPC(_charName, _charStrength) {
    snack = _favoriteSnack;
}

std::string Elf::getSnack() {
    return snack;
}
//
// Created by Wridzer on 26/04/2021.
//

#include "NPC.h"
NPC::NPC(std::string _charName, int _charStrength) {
    name = _charName;
    strength = _charStrength;
}

NPC::~NPC() {}

std::string NPC::getName() {

    return name;
}
int NPC::getStrength() {

    return strength;
}

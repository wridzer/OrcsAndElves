//
// Created by Wridzer on 26/04/2021.
//

#include "NPC.h"
NPC::NPC(std::string charName, int charStrength) {
    NPC::name = charName;
    NPC::strength = charStrength;
}

NPC::~NPC() {}

std::string NPC::getName() {

    return NPC::name;
}
int NPC::getStrength() {

    return NPC::strength;
}

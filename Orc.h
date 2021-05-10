//
// Created by Wridzer on 26/04/2021.
//

#pragma once

#include "NPC.h"

class Orc : public NPC{
public:
    Orc(std::string charName, int charStrength) : NPC(charName, charStrength) {};
};


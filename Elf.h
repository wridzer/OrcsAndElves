//
// Created by Wridzer on 26/04/2021.
//

#pragma once

#include "NPC.h"


class Elf : public NPC{
public:
    Elf(std::string charName, int charStrength) : NPC(charName, charStrength){};
};


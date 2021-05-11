//
// Created by Wridzer on 26/04/2021.
//
#pragma once
#include <iostream>
#include <string>


class NPC {
public:
    NPC(std::string _charName, int _charStrength);
    ~NPC();

    int getStrength();
    std::string getName();
    std::string name;
    int strength;
};


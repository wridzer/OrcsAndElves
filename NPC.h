//
// Created by Wridzer on 26/04/2021.
//
#pragma once
#include <iostream>
#include <string>
#include "Inventory.h"


class NPC {
public:
    NPC(std::string _charName, int _charStrength);
    ~NPC();
    void SetInventory(std::string item);
    void GetInventory();

    Inventory* inventory = new Inventory();

    int getStrength();
    std::string getName();
    std::string name;
    int strength;
};


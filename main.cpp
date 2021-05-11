#include <iostream>
#include <string>
#include "NPC.h"
#include "Elf.h"
#include "Orc.h"

using namespace std;

int main() {
    std::cout << "Starting" << std::endl;
    Orc* orc = new Orc("Bob", 80, "Dog");
    Elf* elf = new Elf("Henry", 30, "Frikandellen");
    cout << "Orc name is: " << orc->getName() << ". Strength is: " << orc->getStrength() << ". Favorite animal is: " << orc->getAnimal() << endl;
    cout << "Elf name is: " << elf->getName() << ", Strength is: " << elf->getStrength() << ". Favorite snack is: " << elf->getSnack() << endl;

    delete orc;
    delete elf;
    return 0;
}

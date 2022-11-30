#include <iostream>
#include "include/Animal.h"

using namespace std;

int main()
{
    // Declare dog instance for test Animal class
    Animal *dog = new Animal("phillibert","carnivore","chien");


    //Console log all attributs
    cout << "name : " << dog->getName() << endl;
    cout << "Diet : " << dog->getDiet().getDietString() << endl;
    cout << "Species : " << dog->getSpecies() << endl;
    cout << "Number of limbs : " << dog->getNbLimbs() << endl;
    cout << "Life time : " << dog->getLifeTime() << endl;
    cout << "Gestation Time : " << dog->getGestationTime() << endl;

    cout << "---------------"<< endl;
    Diet *pizzaorus = new Diet("pizzaorus");
    Animal *aurelien = new Animal("aurelienNosaure",*pizzaorus);
    cout << "Diet auré : " << aurelien->getDiet().getDietString() << endl;
    return 0;
}

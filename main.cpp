#include <iostream>
#include "include/Animal.h"

using namespace std;

int main()
{
    cout << "Start TestIHM" << endl;
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
    cout << "Diet aurelien : " << aurelien->getDiet().getDietString() << endl;


    //copy of java test :

    // Basic animal
    cout << "Basic animal :" << endl;
    Animal *animal = new Animal();
    cout << animal->toString() << endl;

    // Basic animal with name
    cout << "Basic animal with name :" << endl;
    Animal *bernard = new Animal("bernard");
    cout << bernard->toString() << endl;

    // Basic animal with name && string diet
    cout << "Basic animal with name and string diet :" << endl;
    Animal *phillipeCarnivorus = new Animal("phillipeCarnivorus","pizza");
    cout << phillipeCarnivorus->toString() << endl;


    //Basic animal with name && Diet diet
    cout << "Basic animal with name && Diet diet :" << endl;
    Diet *phillipeDiet = new Diet("omnivorussss");
    cout << "getonlyDiet : " + phillipeDiet->getDietString() << endl;
    Animal *phillipeCarnivorus2 = new Animal("phillipeCarnivorus2", *phillipeDiet);
    cout << phillipeCarnivorus2->toString() << endl;

    //Basic animal with name && string diet && string p_species
    cout << "Basic animal with name && string diet && string p_species :" << endl;
    Animal *mamp = new Animal("mamp", "carnivorus", "elephant");
    cout << mamp->toString() << endl;

    // Basic animal with name && Diet diet && string p_species
    cout << "Basic animal with name && Diet diet && string p_species :" << endl;
    Diet *mamp2Diet = new Diet("carnivorus");
    Animal *mamp2 = new Animal("mamp2", *mamp2Diet, "elephant");
    cout << mamp2->toString() << endl;

    return 0;
}

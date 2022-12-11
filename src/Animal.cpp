#include <iostream>
#include "../include/Animal.h"
#include "../include/Diet.h"

using namespace std;

/**
* Destructor
*/
Animal::~Animal(){
    //dtor
}

/**
* Animal Constructor with 0 param
*/
Animal::Animal()
{
    this->m_name = "unknow";
    this->m_nbLimbs = 4;
}

/**
* Animal Constructor with 1 param
* <params> string p_name
*/
Animal::Animal(string p_name)
{
    this->m_name = p_name;
    this->m_nbLimbs = 4;
}

/**
* Animal Constructor with 2 params
* <params> string p_name
* <params> string p_diet
*/
Animal::Animal(string p_name,string p_diet)
{
    this->m_name = p_name;
    Diet *newDiet = new Diet(p_diet);
    this->m_diet = *newDiet;
    this->m_nbLimbs = 4;
}

/**
* Animal Constructor with 2 params (with Diet object)
* <params> string p_name
* <params> Diet p_diet
*/
Animal::Animal(string p_name,Diet p_diet)
{
    this->m_name = p_name;
    this->m_diet = p_diet;
    this->m_nbLimbs = 4;
}

/**
* Animal Constructor with 3 params
* <params> string p_name
* <params> string p_diet
* <params> string p_species
*/
Animal::Animal(string p_name,string p_diet, string p_species)
{
    this->m_name = p_name;
    Diet *newDiet = new Diet(p_diet);
    this->m_diet = *newDiet;
    this->setSpecies(p_species);
    this->m_nbLimbs = 4;
}

/**
* Animal Constructor with 3 params (with Diet object)
* <params> string p_name
* <params> Diet p_diet
* <params> string p_species
*/
Animal::Animal(string p_name,Diet p_diet, string p_species)
{
    this->m_name = p_name;
    this->m_diet = p_diet;
    this->setSpecies(p_species);
    this->m_nbLimbs = 4;
}
//** -------------------- ToString -------------------- **//
string Animal::toString()
{
    string strOut = "name : " + this->m_name + "\n";
    strOut += "Diet : " + this->m_diet.getDietString() + "\n";
    strOut += "Species : " + this->getSpecies() + "\n";
    strOut += "Number of limbs : " + to_string(this->m_nbLimbs) + "\n";
    strOut += "Life time : " + this->getLifeTime() + "\n";
    strOut += "Gestation Time : " + this->getGestationTime() + "\n";
    return strOut;
}
//** -------------------- GETTER -------------------- **//

/**
* Get the Diet instance of animal
*/
Diet Animal::getDiet()
{
    return this->m_diet;
}

/**
* Get the name of animal
*/
string Animal::getName()
{
    return this->m_name;
}

/**
* Get the number of limbs
*/
int Animal::getNbLimbs()
{
    return this->m_nbLimbs;
}

//** -------------------- SETTER -------------------- **//

/**
* Change the name of animal
* <params> string p_name
*/
void Animal::setName(string p_name) {
    this->m_name = p_name;
    return;
}

/**
* Change the number of limbs of an animal
* <params> string p_nbLimbs
*/
void Animal::setNbLimbs(int p_nbLimbs) {
    this->m_nbLimbs = p_nbLimbs;
    return;
}


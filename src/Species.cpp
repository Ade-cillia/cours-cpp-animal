#include <iostream>
#include "../include/Species.h"

using namespace std;

/**
* Destructor
*/
Species::~Species(){
    //dtor
}

/**
* Species Constructor with 0 param
*/
Species::Species()
{
    this->m_species = "chat";
    this->m_lifeTime = "12-18 Years";
    this->m_gestationTime = "65 Days";
}



//** -------------------- GETTER -------------------- **//

/**
* For Get the species name (m_species)
*/
string Species::getSpecies()
{
    return this->m_species;
}

/**
* For Get the lifeTime
*/
string Species::getLifeTime()
{
    return this->m_lifeTime;
}

/**
* For Get the gestationTime
*/
string Species::getGestationTime()
{
    return this->m_gestationTime;
}

//** -------------------- SETTER -------------------- **//

/**
* For Change the species name (m_species)
* <params> string p_species
*/
void Species::setSpecies(string p_species)
{
    this->m_species = p_species;
    return;
}

/**
* Change the gestationTime
* <params> string p_gestationTime
*/
void Species::setGestationTime(string p_gestationTime)
{
    this->m_gestationTime= p_gestationTime;
    return;
}

/**
* For Change the lifetime
* <params> string p_lifeTime
*/
void Species::setLifeTime(string p_lifeTime)
{
    this->m_lifeTime= p_lifeTime;
    return;
}

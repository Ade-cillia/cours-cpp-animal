#include <iostream>
#include "../include/Diet.h"

using namespace std;

/**
* Destructor
*/
Diet::~Diet(){
    //dtor
}

/**
* Diet Constructor with 0 param
*/
Diet::Diet()
{
    this->m_diet = "omnivorous";
}

/**
* Diet Constructor with 1 param
* <params> string p_diet
*/
Diet::Diet(string p_diet)
{
    this->m_diet = p_diet;
}

//** -------------------- GETTER -------------------- **//

/**
* Get the diet name (m_diet)
*/
string Diet::getDietString()
{
    return this->m_diet;
}

//** -------------------- SETTER -------------------- **//

/**
* Change the diet name (m_diet)
* <params> string p_diet
*/
void Diet::setDietString(string p_diet)
{
    this->m_diet = p_diet;
    return;
}

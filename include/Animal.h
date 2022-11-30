#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "Diet.h"
#include "Species.h"

using namespace std;

class Animal: public Species
{
    public:
        ~Animal();
        Animal();
        Animal(string p_name);
        Animal(string p_name,string p_diet);
        Animal(string p_name,Diet p_diet);
        Animal(string p_name,string p_diet, string p_species);
        Animal(string p_name,Diet p_diet, string p_species);
    
        string getName();
        void setName(string p_name);

        Diet getDiet();

        int getNbLimbs();
        void setNbLimbs(int p_name);
    protected:

    private:
        int m_nbLimbs;
        string m_name;
        Diet m_diet;
};

#endif

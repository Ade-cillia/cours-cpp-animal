#ifndef SPECIES_H
#define SPECIES_H
#include <string>

using namespace std;

class Species
{
public:
    Species();
    ~Species();

    string getSpecies();
    void setSpecies(string p_species);

    string getLifeTime();
    void setLifeTime(string p_lifeTime);

    string getGestationTime();
    void setGestationTime(string p_gestationTime);

protected:

private:
    string m_species;
    string m_lifeTime; // lifeTime (ex: 10-18 Years, 80 Years, 156 Days, etc...)
    string m_gestationTime; // lifeTime (ex: 10-18 Days, 9 Month, etc...)
};

#endif

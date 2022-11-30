#ifndef DIET_H
#define DIET_H
#include <string>

using namespace std;

class Diet
{
public:
    Diet();
    ~Diet();
    Diet(string p_diet);
    string getDietString();
    void setDietString(string p_diet);

protected:

private:
    string m_diet;
};

#endif

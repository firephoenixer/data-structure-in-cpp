#include "company.h"

// Constructor definition outside the class
Company::Company(string strName)
{
    name = strName;
    cout << name << " is created!" << endl;
}


// DeConstructor definition outside the class
Company::~Company()
{
    cout << name << " is closed!" << endl;
}




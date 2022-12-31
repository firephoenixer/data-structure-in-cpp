#include "company.h"

// Constructor definition outside the class
Company::Company(string strName)
{
    name = strName;
    numEmployee = 0;
    cout << name << " is created!" << endl;
}


// DeConstructor definition outside the class
Company::~Company()
{
    cout << name << " is closed!" << endl;
}

// show this company's details
void Company::showMyDetails()     
{
    cout <<"Show the details of this company:" << endl;
    cout <<"    name:" << name << endl;
    cout <<"    total employee:" << numEmployee << endl;
    return;

}





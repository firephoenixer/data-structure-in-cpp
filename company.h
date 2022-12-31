#include <iostream>
#include <string>
/*
This file to maintain a company class.
The compamy object is for MMS.  
*/
using namespace std;

class Company
{
public:
    string name;
    unsigned int numEmployee;


    Company(string strName);   // Constructor declaration
    ~Company();                // DeConstructor declaration
    void showMyDetails();      // Method/function declaration



};




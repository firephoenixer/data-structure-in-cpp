#include <iostream>
#include <string>
#include "node.h"
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
    Node *pNode;  // allways point null or one guy
    Node *firstNode;  // allways point to first node


    Company(string strName);   // Constructor declaration
    ~Company();                // DeConstructor declaration
    void showMyDetails();      // Method/function declaration
    void addFounders();        // add 5 founders of this company
    void updateNumber();       // update the total number of employee 
    void showByName(string aName);  // show a employee by name



};




#include "company.h"

// Constructor definition outside the class
Company::Company(string strName)
{
    name = strName;
    numEmployee = 0;
    pNode = nullptr;
    firstNode = nullptr;
    cout << name << " is created!" << endl;
}


// DeConstructor definition outside the class
Company::~Company()
{
    // we should delete the heap memory when deconstruction
    this->pNode = this->firstNode;  // init the pointer
    while(pNode != nullptr)
    {
        if(pNode->nextNode != nullptr)
        {
            pNode = pNode->nextNode;
            delete pNode->preNode;
        }
        else{
            delete pNode;
            pNode = nullptr;
        }       
    }


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

// add 5 founders of this company
void Company::addFounders()
{
    // only when there is no employee, then add
    if(numEmployee > 0)
    {
        cout <<"There allready has some employee, can't add founders any more!" << endl;
        return;
    }
    this->pNode = new Node();
    this->firstNode = this->pNode;  // allways point to the first node
    this->pNode->guy.name = "Founder1";
    this->pNode->guy.gender = "Male";
    this->pNode->guy.age = 39;
    this->pNode->preNode = nullptr;
    // add second founder
    this->pNode->nextNode = new Node();

    this->pNode->nextNode->preNode = this->pNode;  // set a node's prev pointer
    this->pNode =  this->pNode->nextNode;  // point to the next one
    this->pNode->guy.name = "Founder2";
    this->pNode->guy.gender = "Female";
    this->pNode->guy.age = 59;
    // add 3th founder
    this->pNode->nextNode = new Node();

    this->pNode->nextNode->preNode = this->pNode;  // set a node's prev pointer
    this->pNode =  this->pNode->nextNode;  // point to the next one
    this->pNode->guy.name = "Founder3";
    this->pNode->guy.gender = "Female";
    this->pNode->guy.age = 29;
    // add 4th founder
    this->pNode->nextNode = new Node();

    this->pNode->nextNode->preNode = this->pNode;  // set a node's prev pointer
    this->pNode =  this->pNode->nextNode;  // point to the next one
    this->pNode->guy.name = "Founder4";
    this->pNode->guy.gender = "Male";
    this->pNode->guy.age = 38;
    // add 5th founder
    this->pNode->nextNode = new Node();

    this->pNode->nextNode->preNode = this->pNode;  // set a node's prev pointer
    this->pNode =  this->pNode->nextNode;  // point to the next one
    this->pNode->guy.name = "Founder5";
    this->pNode->guy.gender = "Female";
    this->pNode->guy.age = 31;
    // add 6th founder, none
    this->pNode->nextNode = nullptr;

    this->updateNumber();
}       

// update the total number of employee 
void Company::updateNumber()
{
    this->pNode = this->firstNode;  // init the pointer
    unsigned int numbers = 0;
    while(pNode != nullptr)
    {
        numbers++;
        pNode = pNode->nextNode;
    }
    numEmployee = numbers;  // updated
    return;
} 

// show a employee by name
void Company::showByName(string aName)
{
    this->pNode = this->firstNode;  // init the pointer
    while(pNode != nullptr)
    {
        if(pNode->guy.name == aName)
        {
            cout << aName <<" has been found:" << endl;
            cout << "  gender:" << pNode->guy.gender << endl;
            cout << "  age:" << pNode->guy.age << endl;
            return;  // finish immediately
        }
        pNode = pNode->nextNode;
    }
    cout << aName <<" can't be found!" << endl;
    return;

}


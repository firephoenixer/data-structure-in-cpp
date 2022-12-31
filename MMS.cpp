#include <iostream>
#include <string>
#include "company.h"
/*  Member manage system
Let's image there is a organization need a MMS.
We use this MMS to test Datastructure and some algorithm.
*/



int main()
{
	std::cout << "Member manage system is running!" << std::endl;
    Company myCompany("Galaxy Imaginery Group Company");
    myCompany.showMyDetails();
    myCompany.addFounders();
    myCompany.showMyDetails();
    myCompany.showByName("Founder3");
    myCompany.showByName("Founder6");












    std::cout << "Member manage system is finished!" << std::endl;
	return 0;
}
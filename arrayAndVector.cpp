#include <random>
#include <iostream>
#include <vector>
// use array and vector test the distribution of c++ random number

// use a function tamplate to analisy the distribution
template <typename T> 
void showDistribution(T box, unsigned int n)
{
    unsigned int n20 = 0;  // record how many time the number is in the range of 0-0.20
    unsigned int n40 = 0;
    unsigned int n60 = 0;
    unsigned int n80 = 0;
    unsigned int n100 = 0;

    std::cout << "test box[n-1] : " << box[n-1] << std::endl;
    for(int i = 0; i < n; i++)
    {
        if(box[i] < 0.20)
        {
            n20++;
        }
        else if(box[i] < 0.40)
        {
            n40++;
        }
        else if(box[i] < 0.60)
        {
            n60++;
        }
        else if(box[i] < 0.80)
        {
            n80++;
        }
        else
        {
            n100++;
        }
    }
    std::cout << "Numbers between 0.00-0.20: " << (float)n20/n << std::endl;
    std::cout << "Numbers between 0.20-0.40: " << (float)n40/n << std::endl;
    std::cout << "Numbers between 0.40-0.60: " << (float)n60/n << std::endl;
    std::cout << "Numbers between 0.60-0.80: " << (float)n80/n << std::endl;
    std::cout << "Numbers between 0.80-1.00: " << (float)n20/n << std::endl;
	return;
}


int main() {
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<double> dist(0, 1);

    // test 1000 numbers with array
    std::cout << "test 1000 numbers with array---------------------------------------" << std::endl;
    float arrFloat[1000] = {0};
    for (int i=0; i<1000; ++i)
        arrFloat[i] = dist(mt);

    std::cout << "test arrFloat[999]:" << arrFloat[999] << std::endl;  // this line just show a running 
                                          // time variable to user and make sure everthing running normally
    showDistribution<float *>(arrFloat, 1000);

    // test 10,000 numbers with vector
    std::cout << "\n" << std::endl;
    std::cout << "test 10,000 numbers with vector---------------------------------------" << std::endl;
    std::vector <float> myVector(10000, 0);
    std::cout << "test myVector[9999]:" << myVector[9999] << std::endl;
    for (int i=0; i<10000; ++i)
        myVector[i] = dist(mt);
    std::cout << "test myVector[9999]:" << myVector[9999] << std::endl;
    showDistribution<std::vector <float>>(myVector, 10000);

    // array and vector looks similar, but have different performance at different oprations
    // try to use a vector in the heap memory
    std::cout << "\n" << std::endl;
    std::cout << "try to use a vector in the heap memory---------------------------------------" << std::endl;
    std::vector<float> *pVector = new std::vector<float>(100000, 0);
    std::cout << pVector->at(99999) << std::endl;
    for (int i=0; i<100000; ++i)
        pVector->at(i) = dist(mt);
    std::cout << "test pVector->at(99999):" << pVector->at(99999) << std::endl;
    // must use () to contain *pVector
    std::cout << "test (*pVector)[99999]:" << (*pVector)[99999] << std::endl;
    // must pass *pVector to the function template
    showDistribution<std::vector<float>>(*pVector, 100000);

    delete pVector;

    // the more numbers we have, the rezult is more near 0.20000


}





















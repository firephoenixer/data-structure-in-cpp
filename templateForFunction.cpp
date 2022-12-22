#include <iostream>
using namespace std;

// template can set a function tamplate, which can be defined by compiler automaticly when compiling
// so the function hasn't dinfined yet before compiling
template <typename T> 
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl;         // Call myMax for int, all these functions will defined according the template
	cout << myMax<double>(3.0, 7.0) << endl;  // call myMax for double
	cout << myMax<char>('g', 'e') << endl;    // call myMax for char

	return 0;
}

// So with complate, we can let compiler defined generic functions for we.
#include <iostream>
using namespace std;

// class template can let compiler dinfine class for user when compiling
// so this is not a class, but a class template
// compiler will use this tamplate to generate class for user
// so it is very flexible and useful in some occation

template <typename T> 
class Array {
private:
	T* ptr;
	int size;

public:
	Array(T arr[], int s);
	void print();
};

template <typename T> 
Array<T>::Array(T arr[], int s)
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> 
void Array<T>::print()
{
	for (int i = 0; i < size; i++)
		cout << " " << *(ptr + i);
	cout << endl;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };  
	Array<int> a(arr, 5);  // when compiler see this line, it will generate a class type for "a".
	a.print();
	return 0;
}

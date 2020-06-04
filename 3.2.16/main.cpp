#include <iostream>

void func(int const *a, int* const  b)
{
	*b=*a;
}
int main()
{
	const int a=2;

	int const *  pointer = &a; // wskaznik na stale typu int
	// int * const pointer to staly wskaznik na zmienne typu int

	std::cout<<*pointer<<std::endl;
	pointer++;

	std::cout<<*pointer<<std::endl;
	return 0;
}
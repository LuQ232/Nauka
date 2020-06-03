#include <iostream>

int*  func(unsigned int n)
{
	return new int [n];
}
int main()
{
	std::cout<<func(5);
	return 0;
}
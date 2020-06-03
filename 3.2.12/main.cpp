#include <iostream>

double*  func(unsigned int n)
{
	return new double [n];
}
int main()
{
	std::cout<<func(5);
	return 0;
}
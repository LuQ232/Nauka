#include <iostream>

double*  func()
{
	return new double;
}
int main()
{
	std::cout<<func();
	return 0;
}
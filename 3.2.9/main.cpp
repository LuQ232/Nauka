#include <iostream>

int*  func()
{
	return new int;
}
int main()
{
	std::cout<<func();
	return 0;
}
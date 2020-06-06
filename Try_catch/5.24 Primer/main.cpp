#include <iostream>

int main()
{
	int x,y;
	std::cin>>x>>y;
	if(y == 0)
		throw std::runtime_error("ERROR: You can't divide by zero!");
	std::cout<<x/y;
	return 0;
}
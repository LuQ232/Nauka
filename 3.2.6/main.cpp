#include <iostream>

void func(int n, int* w)
{
	*w=n;
}
int main()
{
	int a=8;
	int *p =&a;
	int c= 12;
	std::cout<<"Przed zamiana a-> "<<a<<std::endl;
	func(c,p);
	std::cout<<"Po zamianie a-> "<<a<<std::endl;

	return 0;
}
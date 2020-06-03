#include <iostream>

void func(int& first, int & second)
{
	int tmp;
	tmp = first;
	first = second;
	second = tmp;
}
int main()
{
	int a=8;
	int b=10;
	int &r1 =a;
	int &r2 =b;

	std::cout<<"Przed zamiana a-> "<<a<<"  b-> "<<b<<std::endl;
	func(r1,r2);
	std::cout<<"Po zamianie a-> "<<a<<"  b-> "<<b<<std::endl;

	return 0;
}
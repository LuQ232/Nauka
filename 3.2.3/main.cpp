#include <iostream>

void func(int* first, int* second)
{
	int tmp;
	tmp = *first;
	*first=*second;
	*second = tmp;
}
int main()
{
	int a=8;
	int b=10;
	int *p1 =&a;
	int *p2 =&b;

	std::cout<<"Przed zamiana a-> "<<a<<"  b-> "<<b<<std::endl;
	func(p1,p2);
	std::cout<<"Po zamianie a-> "<<a<<"  b-> "<<b<<std::endl;

	return 0;
}
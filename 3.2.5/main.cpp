#include <iostream>

int func(const int* first,const int* second)
{
	return *first+*second;
}
int main()
{
	const int a=8;
	const int b=10;
	const int *p1 =&a;
	const int *p2 =&b;

	std::cout<<func(p1,p2);

	return 0;
}
#include <iostream>

int * func(int* first, int* second)
{
	if(*first <= *second)
		return first;
	else
		return second;
}
int main()
{
	int a=8;
	int b=10;
	int *p1 =&a;
	int *p2 =&b;


	std::cout<<"Miejsce w pamieci-> "<<func(p1,p2)<<" Wartosc-> "<<*func(p1,p2)<<std::endl;

	return 0;
}
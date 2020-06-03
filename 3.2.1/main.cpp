#include <iostream>


int func(int* first,int * second)
{
	if(*first >= *second)
		return *first;
	else
		return *second;
}

int main()
{
	int a = 5;
	int b = 10;
	int* p1=&a;
	int* p2=&b;
	std::cout<<func(p1,p2);

	return 0;
}
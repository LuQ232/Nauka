#include <iostream>

double func2(int n)
{
	return 2.5;
}

double func(double (*func2)(int arg) ,int x)
{
	return func2(x);
}
int main()
{
	return 0;
}
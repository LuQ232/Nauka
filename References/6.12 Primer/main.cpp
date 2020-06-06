#include <iostream>


void swap(int & x_,int & y_)
{
	int tmp = y_;
	y_ = x_;
	x_ = tmp;
}

int main()
{
	int x = 5, y = 10;
	std::cout<<"Before swap x-> "<<x<<" y-> "<<y<<std::endl;
	swap(x,y);
	std::cout<<"After swap x-> "<<x<<" y-> "<<y<<std::endl;
	return 0;

}
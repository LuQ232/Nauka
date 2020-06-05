#include <iostream>
#include <vector>

void print(const  std::vector<int>  vec)
{
	for(auto iter =vec.cbegin(); iter != vec.cend();iter++)
		std::cout<< *(iter) <<" ";
}

void print_sum_of_each_pair(const  std::vector<int>  vec)
{
	for(auto iter =vec.cbegin(); iter != vec.cend() - 1;iter++)
	{
		auto sum = *iter + *(iter+1);
		std::cout<<sum<<"  ";
	}
}

void print_sum_of_opposite_pairs(const  std::vector<int>  vec)
{
	auto mid = vec.cbegin() + (vec.cend() - vec.cbegin() + 1) / 2;
	for(auto iter =vec.cbegin(); iter != mid;iter++)
	{
		auto sum = *iter + *(vec.cend() - 1 - ( iter - vec.cbegin() ));
		std::cout<<sum<<"  ";
	}
}

int main()
{
	std::vector <int> v;
	int x;
	while(std::cin>>x)
	{
		v.push_back(x);
	}
	print_sum_of_opposite_pairs(v);

	return 0;
}
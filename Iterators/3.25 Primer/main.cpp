#include<iostream>
#include<vector>

using namespace std;
int main()
{

	vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
	unsigned grade;
	while (cin >> grade) { // read the grades
	 if (grade <= 100) // handle only valid grades
		 ++*( scores.begin() + grade/10); // increment the counter for the current cluster
	}

	for (const auto i: scores)
		std::cout<<i<<" ";

	return 0;
}
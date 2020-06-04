#ifndef PERSON
#define PERSON

#include <iostream>

class Person
{
std::string name;
std::string last_name;
int age;
Person * next;
public:
	Person();
	Person(std::string na, std::string la, int a);
	
	Person * return_next();
	void set_next(Person * ptr);
	
	const std::string return_name();
	const std::string return_last_name();
	const int return_age();
	friend std::ostream& operator<< (std::ostream &output, Person const& p){output << "NAME: " << p.name << " LAST NAME: " << p.last_name <<" AGE:" << p.age<<std::endl; return output;}
};

#endif // PERSON
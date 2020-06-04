#include "person.h"

Person::Person()
{
	int a;
	std::string na,la;
	std::cout<<"imie:";
	std::cin>>na;
	std::cout<<std::endl;
	std::cout<<"nazwisko:";
	std::cin>>la;
	std::cout<<std::endl;
	std::cout<<"wiek:";
	std::cin>>a;
	std::cout<<std::endl;
	name = na;
	last_name = la;
	age = a;

	next = NULL;
}

Person::Person(std::string na, std::string la, int a)
{
	name = na;
	last_name = la;
	age = a;
	next = NULL;
}

Person * Person::return_next()
{
	return next;
}

void Person::set_next(Person * ptr)
{
	next = ptr;
}


const std::string Person::return_name()
{
	return name;
}
const std::string Person::return_last_name()
{
	return last_name;
}
const int Person::return_age()
{
	return age;
}
#include <iostream>


#include "person.h"
#include "list.h"
void menu()
{
	std::cout<<"1. Add new person"<<std::endl;
	std::cout<<"2. Show list data"<<std::endl;
	std::cout<<"3. Delete person by ID"<<std::endl;
	std::cout<<"4. Delete person by last name"<<std::endl;
	std::cout<<"5. Display last person on list"<<std::endl;
}

int main()
{
	List list;
	int choice = 0;
	while(choice != 8)
	{
		menu();
		std::cin>>choice;
		switch(choice)
		{
			case 1:{
				std::string name, last_name;
				int age;
				std::cout<<"Imie: ";
				std::cin>>name;
				std::cout<<"Nazwisko: ";
				std::cin>>last_name;
				std::cout<<"Wiek: ";
				std::cin>>age;
				list.add_new_person(name,last_name,age);
			}
			break;

			case 2:
				list.print_data();
			break;
			case 3:
				list.delete_person_by_id();
			break;
			case 4:
				list.delete_person_by_last_name();
			break;
			case 5:
				list.print_last();
			break;
			default:
				return 0;
			break;
				
		}
	}
	return 0;
}
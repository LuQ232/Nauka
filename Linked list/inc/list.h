#ifndef LIST
#define LIST


#include <iostream>
#include "person.h"
class List
{
	Person * head;
	Person * tail;
	int length;
public:

	List();
	void add_new_person(std::string name,std::string last_name,int age);
	void delete_head();
	void delete_tail();
	void delete_person_by_id();
	void delete_person_by_id(int id);

	void delete_person_by_last_name();
	void print_data();
	void print_last();
};

#endif // LIST
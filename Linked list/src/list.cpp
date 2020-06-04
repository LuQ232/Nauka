#include "list.h"

List::List()
{
	head = NULL;
	tail = NULL;
	length = 0;
}

void List::add_new_person(std::string name,std::string last_name,int age)
{
	if(length == 0) // first person in list
	{
		head = new Person(name,last_name,age);
		tail = head;
	}else
	{
		Person * pointer = head;
		while(pointer->return_next() != NULL)
		{
			pointer = pointer->return_next();
		}
		pointer->set_next(new Person(name,last_name,age));
		tail = pointer->return_next();
	}
	length++;
}
void List::delete_head()
{
	if(length == 0)
	{
		std::cout<<"LIST IS EMPTY"<<std::endl;
	}
	else if(length == 1)
	{
		delete head;
		head = NULL;
		tail = NULL;
		length--;
	}else if(length >1)
	{
		Person * pointer_to_delete = head;
		Person * pointer = head;
		pointer = pointer->return_next();
		head = pointer; // 2nd person is now HEAD
		delete pointer_to_delete;	
		length--;
	}
}

void List::delete_tail()
{
	delete tail;
	Person * pointer_person_before = head;
	for( int i=1;i<length-1;i++)
		{
			pointer_person_before = pointer_person_before->return_next();
		}
		tail = pointer_person_before;
		pointer_person_before->set_next(NULL);
		length --;
}

void List::delete_person_by_id()
{
	int id;
	std::cout<<"ID: ";
	std::cin>>id;
	
	if(id<1 || id>length)
	{
		std::cout<<"BLEDNE ID"<<std::endl;
	}else if(id == 1)
	{
		delete_head();
	}else if(id > 1 && id <length)
	{
		Person * pointer_to_delete = head;
		Person * pointer_person_before = head;

		for( int i=1;i<id-1;i++)
		{
			pointer_person_before = pointer_person_before->return_next();
		}
		pointer_to_delete = pointer_person_before->return_next();

		pointer_person_before->set_next(pointer_to_delete->return_next());
		delete pointer_to_delete;
		length --;
	}else if (id == length)
	{
		delete_tail();
	}

}

void List::delete_person_by_id(int id)
{
	
	if(id<1 || id>length)
	{
		std::cout<<"BLEDNE ID"<<std::endl;
	}else if(id == 1)
	{
		delete_head();
	}else if(id > 1 && id <length)
	{
		Person * pointer_to_delete = head;
		Person * pointer_person_before = head;

		for( int i=1;i<id-1;i++)
		{
			pointer_person_before = pointer_person_before->return_next();
		}
		pointer_to_delete = pointer_person_before->return_next();

		pointer_person_before->set_next(pointer_to_delete->return_next());
		delete pointer_to_delete;
		length --;
	}else if (id == length)
	{
		delete_tail();
	}

}


void List::delete_person_by_last_name()
{
	std::string last_name;
	std::cout<<"Last name-> ";
	std::cin>>last_name;
	std::cout<<std::endl;

	
		Person * pointer = head;
		for(int i=1;i<=length;)
		{
			if(pointer->return_last_name() == last_name)
			{

				pointer = pointer->return_next();
				std::cout<<"USUWAM ID: "<< i<<" Length-> "<<length<<std::endl;
				delete_person_by_id(i);
			}else
			{
				pointer = pointer->return_next();
				i++;
			}
		}

	
}

void List::print_data()
{
	Person * pointer = head;
	int counter = 1;
	std::cout<<std::endl<<"~~~~~~~~~~~~~~~~~~~~~~LIST~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
	while(pointer != NULL)
	{
		std::cout<<counter<<".  ";
		std::cout<<*(pointer);
		pointer = pointer->return_next();
		counter++;
	}
	std::cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<std::endl;
	std::cout<<std::endl;
}

void List::print_last()
{
	if(tail != NULL)
		std::cout<<*(tail);
	else
		std::cout<<"LIST IS EMPTY!"<<std::endl;
}
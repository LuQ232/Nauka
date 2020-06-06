#include <iostream>

int main()
{
	int x,y;
	while(std::cin>>x>>y)
	{
		try
		{
			if(y == 0)
				throw std::runtime_error("ERROR: You can't divide by zero!");
			std::cout<<x/y;
		}catch(std::runtime_error err)
		{
			std::cout<<err.what()<<std::endl;
			std::cout<<"Type c to continue / Type x to exit."<<std::endl;
			char exit;
			std::cin>>exit;
			if(exit == 'x')
				break;
		}	
	}
	return 0;
}
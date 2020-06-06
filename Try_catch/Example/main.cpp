// Example program
#include <iostream>
#include <stdexcept>

void divide(float a, float b)
{
    if(b == 0)
        throw std::runtime_error("ERROR: Divided by zero!!");
    else
        std::cout<<a/b;
}

int main()
{
  float x,y;
  
  while(std::cin>>x>>y)
  {
      try
      {
          divide(x,y);
      }catch (std::runtime_error err)
      {
            std::cout<<err.what();
      }
  }
}

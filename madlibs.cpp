//Authors: 
#include <iostream>
#include <string>

int main()
{
int number;
char grade;
double money;
std::string car;
std::cout<<"enter a number ";
std::cin>>number;
std::cout<<"enter a charecter ";
std::cin>>grade;
std::cout<<"enter a vehicle ";
std::cin>>car;
std::cout<<"enter a price ";
std::cin>>money;

std::cout<<"i woke up at " << number << " AM then i got " << grade << " my " << car << " , and put " << money << " $ worth of gas."<<std::endl; 

  return 0;
}

#include "Rectangle.hpp"

#include <iostream>

int main()
{
	Rectangle r(10,5);
	std::cout<<"Rectangle permiterer is: " << r.calculatePermieter() << std::endl;
	std::cout<<"Rectangle area is: " << r.calculateArea() << std::endl;
	
	return 1;
}
/*
Exercise 3.

Write a program that prompts the user to enter any number and
the number to which the first number should be raised. Then calculate the result
expanding this number to the aforementioned power.

Example:

The user entered:
Number: 2
Power: 5

Exit:
2 to the 5th is 32.
*/

#include <iostream>

int main()
{
	int base,base2,power;
	std::cout << "Please, input base number: " << std::endl;
	std::cin >> base;
	std::cout << "Pleasem input power number: " << std::endl;
	std::cin >> power;
	base2=base;
	
	
	switch (power)
	{
	case 0:
	{
	std::cout << "The result is: 1" << std::endl;
	break;
	}	
	default:
	for (int i = 1; i < power; i++)
	{
	base*=base2
	}
	std::cout << "The result is: " << base << std::endl;
	}
	
    
}

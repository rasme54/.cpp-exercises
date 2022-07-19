
/*
Exercise 1.

Write a program that prompts the user to enter an integer. Then starting from there
number, the program prints the next 100 numbers in the console.

Example:

The user enters:
11

Exit:
12
13
14
15
...
...
111

*/
#include <iostream>


int main()
{
	int num,i;
	std::cout << "Please, input your number: " << std::endl;
	std::cin >> num;
	
	for (i=1;i<100;i++)
	std::cout << num + i << std::endl;
}

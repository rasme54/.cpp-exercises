/*
Exercise 2.

Write a program that will print all uppercase and lowercase letters of the alphabet (A-Z) to the console.

Example:

Output:
A a B b C c D d E e F f G g H h I i J j K k L l M m N n O o P p Q q R r S s T t U u V v W w X x Y y Z z

*/

#include <iostream>

int main()
{
                                                                        // to solve this problem i decided to use ASCII dec adres to charts
	
	for (int i=0;i<=25;i++)                                             //'for' loop that will be diplaying all letters - small and big ones
	{
		int smallNum = 97 + i;                                                 
		int bigNum = 65 + i; 
		char smallChar = smallNum;                                         
		char bigChar = bigNum;
		std::cout << bigChar << smallChar<< " ";
	}
	
}

/*
Exercise 6.

Write a program that asks the user to enter 5 integers (store them in a 5-element array).
It then checks if the numbers entered were odd or even and displays this information to the console.

User Entered:
1
2
3
4
7

Exit:
The number 1 is odd.
The number 2 is even.
The number 3 is odd.
The number 4 is even.
The number 7 is odd.
*/

#include <iostream>

int main()
{
	int num;
	int board[5];
	std::cout<<"Please, input 5 integers: "<<std::endl;
	for(int i=0;i<5;i++)
	{	
		std::cin>>num;
		board[i]=num;
	}	
//	std::cout<<tab[0]<<std::endl;
//	std::cout<<tab[1]<<std::endl;
//	std::cout<<tab[2]<<std::endl;
//	std::cout<<tab[3]<<std::endl;
//	std::cout<<tab[4]<<std::endl;

	for(int i=0;i<5;i++)
	{
		if (board[i]%2==0)
		std::cout<<"Number "<<board[i]<<" is even."<<std::endl;
		else
		std::cout<<"Number "<<board[i]<<" is odd."<<std::endl;
	}


	
}

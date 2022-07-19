/*
Exercise 2.

Write a program that will show the user the actual sum of the numbers (starting at 0). Then she asks if
the user wants to add another number (increasing by 1 in an infinite loop). If the user enters Y or y
adds the mentioned number. If the user enters N or n, the number is skipped and incremented
at 1 (continue). If the user enters anything else followed by Y / y or N / n, the loop closes (breaks).

Entry:
The current sum is: 0.
Do you want to add 1?

Entry:
N / n

Exit:
The current sum is: 0.
Do you want to add 2?

Entry:
Y / y

Exit:
The current sum is: 2.
Do you want to add 3?
*/

#include <iostream>

int main()
{
	int sum = 0;
	char answer;
	int add=1;

	while (add)
	{

	std::cout<<"Input: "<<std::endl;
	std::cout<<"The current sum is: "<<sum<<std::endl;
	
	std::cout<<"Do you want to add "<<add<<" ?"<<std::endl;
	std::cout<<"Type Y(y) or N(n)"<<std::endl;
	std::cin>>answer;
	
	char ansY=89;
	char ansy=121;
	char ansN=78;
	char ansn=110;
	
//	std::cout<<ansY<<std::endl;
//	std::cout<<ansy<<std::endl;
//	std::cout<<ansN<<std::endl;
//	std::cout<<ansn<<std::endl;
	
		if((answer == ansY) or (answer == ansy))
			sum=sum+add;
		else if((answer == ansN) or (answer == ansn))
			add++;
		else
			break;
	}
		
	
	
	
	
	
}

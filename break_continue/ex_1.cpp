/*
Exercise 1.

Write a program that prompts the user to enter an integer. Then the program calculates
sum of all even numbers up to the number entered by the user. Use the statement 'continue' by
omit all odd numbers.

Entry:
12

Exit:
0 + 2 = 2
2 + 4 = 6
6 + 6 = 12
12 + 8 = 20
20 + 10 = 30
30 + 12 = 42
*/
#include <iostream>
int main()
{
	int num;
	int sum = 0;
	std::cout<<"Input: "<<std::endl;
	std::cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		
		if(i % 2==0)
		{
			std::cout<<"Output: "<<std::endl;
			sum=sum+i;
			std::cout<<sum-i<<" + "<<i<<" = "<<sum<<std::endl;
		}
		else
			continue;
	}
	
	
}

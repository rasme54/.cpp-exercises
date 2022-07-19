/*
Exercise 5.

Write a program that prompts the user to enter an integer. Then the program should print
entered the number of asterisks (*) in the console. In addition, it should break the line (endl)
every 5 stars printed.

The user entered:
twenty

Output:
*****
*****
*****
*****
*/

#include <iostream>

int main()
{
    int starNum;
    std::cout<<"Input any integer: "<<std::endl;
    std::cin>>starNum;
   
    for(int i=1;i<=starNum;i++)
    {
        if ((i%5)!=0)
        std::cout<<"*";
        else if ((i%5)==0)
        std::cout<<"*"<<std::endl;
    }
   
}

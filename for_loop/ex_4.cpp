/*
Exercise 4.

Write a program that asks the user to enter any integer n. Then calculate the result
factorial operations (n! - 1 * 2 * 3 * ... * n). List the result of the factorial of n in the console, as well as the result of all factors of the numbers before n.

Example:

The user entered:
4

Exit:
1! = 1
2! = 2
3! = 6
4! = 24
*/

#include <iostream>

int main()
{
    int n;
    long factorialResult = 1;
    std::cout<<"Input any integer: "<<std::endl;
    std::cin>>n;
   
    for(int i=1;i<=n;i++)
    {
        factorialResult*=i;
        std::cout<<i<<"! = "<<factorialResult<<std::endl;
    }
}

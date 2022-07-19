/*
Exercise 1.

Write a program that asks the user for 3 different words (strings). 
Then use 'cout' to list the combinations of these three strings to the console.
*/

#include <iostream>
#include <string>

main () 
{

    std::string text1, text2, text3;

    std::cout << "Input first text: ";
    std::cin >> text1;
    std::cout << "Input second text: ";
    std::cin >> text2;
    std::cout << "Input third text: ";
    std::cin >> text3;

    std::cout << "The combination of the three is :" << std::endl;
    std::cout << text1 << " " << text2 << " " << text3;
}

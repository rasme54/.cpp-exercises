/*

�wiczenie 2.

U�ywaj�c konsoli napisz program, kt�ry pyta si� u�ytkownika o dwie liczby. 
Nast�pnie podmie� te liczby po czym wypisz je na ekran.
*/

#include <iostream>


main () {

    int firstNumber, secondNumber, temporaryContainer;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    temporaryContainer = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temporaryContainer;

    std::cout << "After exchange, the first number is: " << firstNumber << std::endl;
    std::cout << "The second number is: " << secondNumber << std::endl;
}

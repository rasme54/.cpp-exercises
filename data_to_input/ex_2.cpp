/*

Æwiczenie 2.

U¿ywaj¹c konsoli napisz program, który pyta siê u¿ytkownika o dwie liczby. 
Nastêpnie podmieñ te liczby po czym wypisz je na ekran.
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

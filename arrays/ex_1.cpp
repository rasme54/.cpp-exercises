/*
�wiczenie 1.

Napisz aplikacj�, kt�ra pyta si� u�ytkownika o 4 liczby. Zapisz te liczby w 4-elementowej tablicy typu double. 
Liczby powinny zosta� dodane do siebie a rezultat wypisany w konsoli. Dodatkowo wypisz na wyj�ciu pierwszy oraz ostatni adres tablicy.

eg.

Przyk�ad:
val 1 = 2
val 2 = 3
val 3 = 5
val 4 = 6

Output:

Wynik = 16
Adres pierwszego elementu tablicy = 0x69fed8
Adres ostatniego elementu tablicy = 0x69fef8 */

#include <iostream>

main()
{
	//Napisz aplikacj�, kt�ra pyta si� u�ytkownika o 4 liczby.
	int a,b,c,d; 
	std::cout << "Podaj 4 liczby: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	
	// Zapisz te liczby w 4-elementowej tablicy typu double.
	double tab[4] = {a,b,c,d};
	
	int suma = a+b+c+d;
	std::cout << "Suma tych liczna to: " << suma << std::endl;
	std::cout << "Adresy 1. i 4. elementu tablicy to: " << &tab[0] << " i " << &tab[3] << std::endl;
	
	
	
	
}



/*
Æwiczenie 1.

Napisz aplikacjê, która pyta siê u¿ytkownika o 4 liczby. Zapisz te liczby w 4-elementowej tablicy typu double. 
Liczby powinny zostaæ dodane do siebie a rezultat wypisany w konsoli. Dodatkowo wypisz na wyjœciu pierwszy oraz ostatni adres tablicy.

eg.

Przyk³ad:
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
	//Napisz aplikacjê, która pyta siê u¿ytkownika o 4 liczby.
	int a,b,c,d; 
	std::cout << "Podaj 4 liczby: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	
	std::cout << "val 1 = " << a <<std::endl;
	std::cout << "val 2 = " << b <<std::endl;
	std::cout << "val 3 = " << c <<std::endl;
	std::cout << "val 4 = " << d <<std::endl;
	
	// Zapisz te liczby w 4-elementowej tablicy typu double.
	double tab[4] = {a,b,c,d};
	
	//sprawdzanie tablicy
//	for(int i=0;i<=3;i++)
//		std::cout<<tab[i]<<std::endl;
	
	int suma = a+b+c+d;
	std::cout << "Wynik: " << suma << std::endl;
	std::cout << "Adresy 1. elementu tablicy to: " << &tab[0] <<std::endl;
	std::cout << "Adresy 4. elementu tablicy to: " << &tab[3] <<std::endl;
	
	
	
	
}



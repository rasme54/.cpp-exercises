/*
Exercise 2.
Stwórz dwuwymiarową tablicę 3x3 przechowującą l. całkowite. Zainicjalizuj tą tablicę wybranymi przez Ciebie liczbami. (Każda komórka tablicy powinna mieć jakąś wartość)

Napisz program, który pyta się użytkownika o wartość x i y (od 1 do 3). Program powinien wypisać w konsoli wartość przechowywaną w tablicy odpowiednio do podanych współrzędnych x i y.
Pamiętaj, że współrzędne numerujemy od 1 a tablicę numerujemy od ZERA.

Przykład:

Użytkownik wpisuje:
x: 2
y: 2

Output:
cout << array[1][1];
*/

#include <iostream>

main()
{
	int tab[3][3] = {1,3,5,12,14,17,65,99,2};
	
	int x,y;
	std::cout << "Wprowadz wsporzedna x: " << std::endl;
	std::cin >> x;
	std::cout << "Wprowadz wsporzedna y: " << std::endl;
	std::cin >> y;
	bool term = ((y>=0) && (y<=2));
	bool term2 = ((x>=0) && (x<=2));
	if ((term) && (term2))
	{
		std::cout << "Wartosc wspolrzednej o wspolrzednych " << x << " i " << y << " " << "to: " << std::endl;
		std::cout << tab[x][y] << std::endl;
	}
	
	
}

/*
Exercise 2.
Stw�rz dwuwymiarow� tablic� 3x3 przechowuj�c� l. ca�kowite. Zainicjalizuj t� tablic� wybranymi przez Ciebie liczbami. (Ka�da kom�rka tablicy powinna mie� jak�� warto��)

Napisz program, kt�ry pyta si� u�ytkownika o warto�� x i y (od 1 do 3). Program powinien wypisa� w konsoli warto�� przechowywan� w tablicy odpowiednio do podanych wsp�rz�dnych x i y.
Pami�taj, �e wsp�rz�dne numerujemy od 1 a tablic� numerujemy od ZERA.

Przyk�ad:

U�ytkownik wpisuje:
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
	
	if (x>=1 && x<=3 && y>=1 && y<=3)
	{
		std::cout << "Wartosc wspolrzednej o wspolrzednych " << x << " i " << y << " " << "to: " << std::endl;
		std::cout << tab[--x][--y] << std::endl;
	}
	else
	std::cout<<"Podane wartosci nie mieszcza sie w rozmiarze tablicy 3x3"<<std::endl;
	
	
}

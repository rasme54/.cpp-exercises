/*
Exercise 2.
Stwórz dwuwymiarow¹ tablicê 3x3 przechowuj¹c¹ l. ca³kowite. Zainicjalizuj t¹ tablicê wybranymi przez Ciebie liczbami. (Ka¿da komórka tablicy powinna mieæ jak¹œ wartoœæ)

Napisz program, który pyta siê u¿ytkownika o wartoœæ x i y (od 1 do 3). Program powinien wypisaæ w konsoli wartoœæ przechowywan¹ w tablicy odpowiednio do podanych wspó³rzêdnych x i y.
Pamiêtaj, ¿e wspó³rzêdne numerujemy od 1 a tablicê numerujemy od ZERA.

Przyk³ad:

U¿ytkownik wpisuje:
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
	bool term = ((y>=0) && (y<=3));
	bool term2 = ((x>=0) && (x<=3));
	if ((term) && (term2))
	{
		std::cout << "Wartosc wspolrzednej o wspolrzednych " << x << " i " << y << " " << "to: " << std::endl;
		std::cout << tab[x-1][y-1] << std::endl;
	}
	else
	std::cout<<"Podane wartosci nie mieszcza sie w rozmiarze tablicy 3x3"<<std::endl;
	
	
}

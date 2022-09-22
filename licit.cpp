#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main()


{
	
	cout << "Szia eladóvá vállt lapos tévém-et szeretném árverésre bocsátani, " <<endl;
	cout << "várom a liciteket, aki a számomra legmegfelelőbb összeget mondja, " <<endl;
	cout << "azé lesz a tévé!" <<endl;
	cout << "Az ellenfeled Péter lesz."<<endl<<endl;
	int kezdolicit = 15000;
	cout << "Kezdő licit: " <<kezdolicit<< "Ft!" <<endl;

	int licitterm;
	srand (time(NULL));
	int v3 = rand() % 300000 + 15000;
	int v2 = rand() % 10000 + 15000;
	
	int licitgep;

	cin >> licitterm;


	if (licitterm < kezdolicit)

	{
		cout << "A minimum licit " <<kezdolicit<< "Ft!, kérlek kínálj többet!" 												<<endl<<endl;

		
	}

	

	do
	{
		
		cin >> licitterm;
		int licitpeter = licitterm + v2;
		int vegosszeg;

		cout << "Péter licitje: " <<licitpeter<< "Ft" <<endl;
		vegosszeg = licitpeter;
		
		

		if (licitterm >= v3)
		{
			cout << "GRATULÁLOK! A tévé a tied!" <<endl;
			cout <<v3;
			break;
		}
		else if (licitpeter >= v3)
		{
			cout << "Sajnálom, a tévé Péteré!" <<endl;
			cout <<v3;
			break;		
		}
	}
	while( true );

	


	return 0;
}

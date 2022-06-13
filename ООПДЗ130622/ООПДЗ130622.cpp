#include "Cat.h"
#include < windows.h > 

int main()
{
	setlocale(0, "");
	srand(0);

	Cat cat;
	//cat.Fill();

	cout << cat.Getname() << "\n";
	cout << cat.Getage() << "\n";
	cout << cat.Getweight() << "\n";

}




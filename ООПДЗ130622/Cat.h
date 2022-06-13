#include <iostream>
using namespace std;


class Cat
{
	// поля:
private:
	string name; // кличка кота
	string color; // цвет шёрстки
	int age; // возраст в годах
	double weight; // вес
	bool is_hungry; // голодный или нет?
	int energy = 80;//запас енергии 0-100 0- умерла, 100 полна энергии
	int percent;
	// методы:
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
	Cat();
	Cat(string name1);
	Cat(string name1, string color1);
	Cat(string name1, string color1, int age1);
	Cat(string name1, string color1, int age1, double weight1);
	Cat(string name1, string color1, int age1, double weight1, bool is_hungry1);
	Cat(string name1, string color1, int age1, double weight1, bool is_hungry1, int energy1);


	void Play();
	void Sleep();
	void Eat();
	void Print() const;
	void Speak();
	void Wake_up();
	void Hunting();
	void Fill();

	void Setname(string name1);
	void Setcolor(string color1);
	void Setage(int age1);
	void Setweight(double weight1);
	void Setis_hungry(bool is_hungry1);
	void Setenergy(int energy1);

	string Getname() const;
	string Getcolor() const;
	int Getage() const;
	double Getweight() const;
	bool Getis_hungry() const;
	int Getenergy() const;

};

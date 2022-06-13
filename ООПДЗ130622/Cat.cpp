#include "Cat.h"

void Cat::Play()
{
	if (is_hungry == 1) cout << "не могу играть так как голодна\n";
	if (energy > 25) energy -= 20;
	cout << name << " is playing\n";
}
void Cat::Sleep()
{
	cout << name << " is sleeping\n";
	is_hungry == 1;
}
void Cat::Eat()
{
	cout << name << " is eating\n";
	weight += 0.2;
	is_hungry = false;
	energy += 10;
	if (energy > 100) energy = 100;
}
void Cat::Print() const
{
	cout << name << " Name\n";
	cout << color << " color\n";
	cout << age << " age\n";
	cout << weight << " weight\n";
	if (is_hungry == 1)
		cout << " is_hungry\n";
	else cout << " is not hungry";
}
void Cat::Speak()
{
	cout << "Cat is saying Maow\n";
}
void Cat::Wake_up()
{
	is_hungry = 1;
	energy = 80;
	weight -= 10;
	cout << "Cat is wake up\n";
}
void Cat::Hunting()
{
	percent = rand() % 101;
	if (energy > 20)
	{
		cout << "кот не устал\n";
		if (percent <= 30)
		{
			cout << "кошка охотитс€ и ест\n";
			energy -= 10;
			weight += 0.2;
			is_hungry = false;
		}
		else
		{
			cout << "кот охотитс€, не ел еще\n";
			weight -= 0.1;
		}
	}
	else cout << "кот устал, он не охотилс€\n";
}
void Cat::Fill()
{
	cout << "¬ведите им€ кота:\n ";
	cin >> name;
	cout << "¬ведите возраст кота в годах:\n ";
	cin >> age;
	cout << "¬ведите вес кота в килограммах:\n ";
	cin >> weight;
}

void Cat::Setname(string name1)
{
	name = name1;
}

void Cat::Setcolor(string color1)
{
	color = color1;
}
void Cat::Setage(int age1)
{
	if (age1 >= 0 || age1 <= 35) age = age1;
	else
		cout << "Incorrect value for parametr age\n";
}
void Cat::Setweight(double weight1)
{
	if (weight1 >= 0 || weight1 <= 20) weight = weight1;
	else
		cout << "Incorrect value for parametr weight\n";
}
void Cat::Setis_hungry(bool is_hungry1)
{
	if (is_hungry1 == 0 || is_hungry1 == 1) is_hungry = is_hungry1;
	else
		is_hungry = 1;
}
void Cat::Setenergy(int energy1)
{
	if (energy1 >= 0 || energy1 <= 100) energy = energy1;
	else
		cout << "Incorrect value for parametr energy\n";
}
string Cat::Getname() const
{
	return name;
}
string Cat::Getcolor() const
{
	return color;
}
int Cat::Getage() const
{
	return age;
}
double Cat::Getweight() const
{
	return weight;
}
bool Cat::Getis_hungry() const
{
	return is_hungry;
}
int Cat::Getenergy() const
{
	return energy;
}

Cat::Cat():Cat("Tom") {}

Cat::Cat(string name1):Cat(name1, "white") {}

Cat::Cat(string name1, string color1):Cat(name1, color1, 2) {}

Cat::Cat(string name1, string color1, int age1): Cat(name1, color1, age1,4) {}

Cat::Cat(string name1, string color1, int age1, double weight1): Cat(name1, color1, age1, weight1,false) {}

Cat::Cat(string name1, string color1, int age1, double weight1, bool is_hungry1): Cat(name1, color1, age1, weight1, is_hungry1, 70) {}

Cat::Cat(string name1, string color1, int age1, double weight1, bool is_hungry1, int energy1) 
{
	Setname(name1);
	Setcolor(color1);
	Setage(age1);
	Setweight(weight1);
	Setis_hungry(is_hungry1);
	Setenergy(energy1);
	
}

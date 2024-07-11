#include <iostream>
#include <string>

using namespace std;

class Human
{
	string name;
	string surname;
	int age;
public:
	Human()
	{
		age = 0;
	}
	Human(const char* n, const char* s, int a)
	{
		name.append(n);
		surname.append(s);
		age = a;
	}
	void Output()
	{
		cout << name << endl << surname << endl << age << endl;
	}
};

class Car
{
	string color;
	string model;
	string country;
	int price;
	int year;
public:
	Car()
	{
	    price = 0;
		year = 0;
	}
	Car(const char* c, const char* m, const char* s, int p, int y)
	{
		color.append(c);
		model.append(m);
		model.append(s);
		price = p;
		year = y;
	}
	void OutputCar()
	{
		cout << color << endl << model << endl << country << endl << price << endl << year << endl;
	}
};

int main()
{
	//string str("Hello world!");
	//cout << str << endl;
	//str += "HELLO";
	//cout << str << endl;
	//str.append("apple");
	//cout << str << endl;
	//cout << strlen(str.c_str()) << endl;
	//cout << str.size() << endl;

	/*Human a("Ivan", "Popov", 26);
	a.Output();*/

	Car b("Red", "BMW X5", "Germany", 26121, 2017);
	b.OutputCar();
}
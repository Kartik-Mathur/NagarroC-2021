#include <iostream>
using namespace std;

//////////////////// BLUE PRINT //////////////////////////////
class Car { // Modern Data type
public:
	char name[100];
	int price;
	int average;
	int model;

	//  Constructor
	Car() {
		cout << "In Default Constructor" << endl;
	}

	// Parameterized Constructor
	Car(char *n, int p, int av, int m) {
		cout << "In Parameterized Constructor" << endl;
		strcpy(name, n);
		price = p;
		average = av;
		model = m;
	}

	// Parameterized Constructor
	Car(char *n, int p, int av, int m) {
		cout << "In Parameterized Constructor - 2" << endl;
		strcpy(name, n);
		price = p;
		average = av;
		model = m;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Average: " << average << endl;
		cout << "Model  : " << model << endl << endl;
	}
};
//////////////////// BLUE PRINT //////////////////////////////

int main() {

	Car a; // This is how we create an object

	// a.name = "BMW"; // will not work
	strcpy(a.name, "BMW");
	a.price = 100;
	a.average = 10;
	a.model = 2021;

	a.print();

	Car b("AUDI", 180, 12, 2017);
	// strcpy(b.name, "AUDI");
	// b.price = 120;
	// b.average = 12;
	// b.model = 2018;

	b.print();

	Car c(120, 25, 2021, "Maruti");
	c.print();

	return 0;
}


























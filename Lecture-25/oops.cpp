#include <iostream>
using namespace std;

//////////////////// BLUE PRINT //////////////////////////////
class Car { // Modern Data type
private:
	int price;
public:
	char *name;
	int average;
	int model;

	//  1. Constructor
	Car() {
		name = NULL;
		cout << "In Default Constructor" << endl;
	}

	// 2. Parameterized Constructor
	Car(char *n, int p, int av, int m) {
		cout << "In Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		average = av;
		model = m;
	}

	// 3. Copy Constructor
	// Car c = b;
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name; // X.name is a pointer and name is a pointer
		price = X.price;
		model = X.model;
		average = X.average;
	}

	// 4. Copy Assignment Operator
	// d = b;
	void operator=(Car &X) {
		cout << "Inside Copy Assignment" << endl;
		if (name != NULL) {
			delete [] name;
			name = NULL;
		}

		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		average = X.average;
		model = X.model;
	}

	// Operator Overloading
	void operator+=(Car X) {
		char *x = new char[strlen(X.name) + strlen(name) + 1];
		strcpy(x, name);

		delete name;
		name = x;

		strcat(name, X.name);

		price += X.price;
		model += X.model;
		average += X.average;
	}


	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Average: " << average << endl;
		cout << "Model  : " << model << endl << endl;
	}

	void setPrice(int p) {
		if (p > 100 and p < 500) {
			price = p;
		}
		else {
			price = 200;
		}
	}

	int getPrice() {
		return price;
	}

	void setName(char* n) {
		if (name != NULL) {
			delete [] name;
			name = NULL;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

};
//////////////////// BLUE PRINT //////////////////////////////

int main() {

	Car a; // This is how we create an object
	// a.price = 10;
	a.setPrice(-100);
	cout << a.getPrice() << endl;
	// a.name = "BMW"; // will not work
	// strcpy(a.name, "BMW");
	a.setName("BWM");
	a.setName("BMW");

	a.setPrice(100);
	a.average = 10;
	a.model = 2021;

	Car b("AUDI", 180, 12, 2017);
	Car c = a;

	Car d = c; // Copy Constructor, and Car d(c);
	// a = "BMW"
	a.name[0] = 'T';

	// Copy Assignment Operator
	d = b;// This is assignment



	a.print();
	b.print();
	a += b;
	a.print();

	// c.print();
	// d.print();

	return 0;
}


























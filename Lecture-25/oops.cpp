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
	const int tyres;
	// By Default functions present in class: Constructor, Copy Const., Copy Assignment, Destructor

	//  1. Constructor
	// Initialization list
	Car(): tyres(4), name(NULL) {
		// name = NULL;
		cout << "In Default Constructor" << endl;
	}

	// 2. Parameterized Constructor
	Car(char *n, int p, int av, int m): tyres(4), price(p), average(av), model(m) {
		cout << "In Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		// price = p;
		// average = av;
		// model = m;
	}

	// 3. Copy Constructor
	// Car c = b;
	Car(Car &X): tyres(4) {
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
		char *x1 = new char[strlen(X.name) + strlen(name) + 1];
		strcpy(x1, name);

		delete []name;
		name = x1;

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

	// 4. Destructor: To destroy an Object
	~Car() {
		cout << "Destroying car " << name << endl;
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

	Car d("Maruti", 200, 20, 2020);
	// Car d = c; // Copy Constructor, and Car d(c);
	// a = "BMW"
	// a.name[0] = 'T';

	// Copy Assignment Operator
	// d = b;// This is assignment

	Car *dynamicCar = new Car;
	// First thing we need to do is assign the memory to the name bucket
	// So that we can copy the car name
	char arr[] = "Tesla";

	(*dynamicCar).name = new char[strlen(arr) + 1];
	strcpy((*dynamicCar).name, arr);

	// delete dynamicCar;
	// dynamicCar = NULL;

	a.print();
	b.print();
	c.print();
	d.print();
	// a += b;
	// a.print();

	// c.print();
	// d.print();

	return 0;
}


























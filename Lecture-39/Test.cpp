#include <iostream>
#include <list>
using namespace std;

#define pb push_back

class fruits {
public:
	string name;
	int price;

	fruits(string s, int p): name(s), price(p) {}
};

int main() {

	int x = 10; // x will be by default of type int

	list<fruits> l;
	l.push_back(fruits("Mango", 100));
	l.push_back(fruits("Apple", 150));
	l.push_back(fruits("Kiwi", 120));
	l.push_back(fruits("PineApple", 300));

	// list<float> l;
	// l.pb(1.11);
	// l.pb(2.11);
	// l.pb(3.11);
	// l.pb(4.21);
	// l.pb(6.21);

	for (auto data : l) { // auto will identify the type of data return by the list l
		cout << "[Name: " << data.name << ": , Price: " << data.price << "] -->";
	}
	cout << endl;
	return 0;
}

















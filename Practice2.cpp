#include <iostream>
using namespace std;

// Put the person struct here

struct Person {
    string firstname;
    string secondname;
    Person();
};

Person::Person() {
  firstname = "Unknown";
  secondname = "Unknown";
}
int main() {
	// Create two instances of person here, and assign the names.

  Person a;
  cout << "Person a:" << a.firstname << a.secondname << endl;
  a.firstname = "Dorian";
  a.secondname = "Grey";
  cout << "Person a:" << a.firstname << a.secondname << endl;
  

  Person b;
   cout << "Person b: " << b.firstname << b.secondname << endl;
  b.firstname = "Charlie";
  b.secondname = "Brown";
  cout << "Person b: " << b.firstname << b.secondname << endl;  


	return 0;
}

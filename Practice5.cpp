#include <iostream>
using namespace std;

// Put the person struct here

struct Person {
    string firstname;
    string secondname;
    Person();
    Person(string f, string l);
};

Person::Person() {
  firstname = "Unknown";
  secondname = "Unknown";
}

Person::Person(string f, string l) {
  firstname = f;
  secondname = l;
}

void PrintPerson(Person x) {
  cout << "Person:" << x.firstname << x.secondname << endl;
}

int main() {
	// Create two instances of person here, and assign the names.

  Person a;
  PrintPerson(a);
  a.firstname = "Dorian";
  a.secondname = "Grey";
  PrintPerson(a);
  

  Person b("linus", "Van Pelt");
  PrintPerson(b);
  b.firstname = "Charlie";
  b.secondname = "Brown";
  PrintPerson(b);


	return 0;
}

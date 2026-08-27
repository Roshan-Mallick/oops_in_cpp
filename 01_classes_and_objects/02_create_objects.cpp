#include<iostream>
#include<string>

using namespace std;

class student {

	public: // Public access specifier allows members to be accessed outside the class

		 int roll;
		 string name;

		 void info() {
		   cout << "My roll is: " << roll << endl;
		   cout << "My name is: " << name << endl;
		 }
};

int main() {

	student s1; // Create the first object from the student class
	student s2; // Create the second object from the student class

	return 0;
}

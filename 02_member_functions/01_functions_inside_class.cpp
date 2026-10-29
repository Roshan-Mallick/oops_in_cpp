#include<iostream>

using namespace std;

class test {

	public : void display () {
		cout << "Function declared in the class" << endl;
        cout << "And it is declared under the public access specifier" << endl;
	}
};

int main () {

	test t1;

	t1.display();


	return 0;
}
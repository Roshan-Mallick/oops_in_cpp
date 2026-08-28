#include<iostream>
using namespace std;

class test {


	public : void display (); // Function declared inside the class

};

inline void test :: display () {
    
	cout << "This is an inline function outside the class" << endl ;

}


int main  () {

	test t1;
	t1.display();

 return 0;
}

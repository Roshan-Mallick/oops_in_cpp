#include<iostream>

using namespace std;

class test {
 
	public : void display () ; // Member function declaration
};

//Member function defined outside of the class

void test :: display () {
   cout << "Function declared inside the class." << endl;
   cout << "Function defined outside the class." << endl; 
}

int main () {


 return 0;

 }

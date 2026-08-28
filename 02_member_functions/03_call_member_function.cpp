#include<iostream>

using namespace std;

class test {

    
	public : void inside_fn () {
		   cout << "declared and defined inside the class " << endl ;
		 }

		 void outside_fn (); // declared inside the class 
};


void test :: outside_fn () {  // defining the function outside the class using scope resolution operator (::)
   
	cout << "Declared insdie the class " << endl;
	cout << "defined out side the class "<< endl;


};

int main () {

	test obj;

	obj.inside_fn () ;
	obj.outside_fn () ;

 return 0;
}

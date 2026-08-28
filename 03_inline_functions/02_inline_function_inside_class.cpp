#include<iostream>
using namespace std;

class test {
  
	public : inline void display () {
           cout << "This is a inline member function" << endl;
 	}


};

int main () {

	test t1;
	t1.display();


	return 0;

}

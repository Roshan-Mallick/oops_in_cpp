#include<iostream>
using namespace std;

class citizen {

	private : int age ;

	public : void set_data(int a){
		   age = a ;
		 }

		 void show_info () {
		 
                      if (age >= 18) cout << "can vote \n";
                      else cout << "can not vote\n";
		 }

};

int main () {

	citizen c1;

        int age;
	cout << "Enter you age : ";
	cin >> age ;

	c1.set_data(age);
	c1.show_info();


return 0;
}

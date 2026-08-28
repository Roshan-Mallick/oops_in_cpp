#include<iostream>
using namespace std;

class abstract {

	private : void perform_action () {
		    if (button == 1) cout << "ON\n";
		    else cout << "OFF\n";
		  }

	public : bool button;
		 
		void click () {
		  perform_action();
		} 

};
int main () {

	abstract b ;

	int option ;
	cout << "Enter 1 to ON \n";
	cout << "Enter 2 to OFF \n";
	cout << "Enter : ";
	cin >> option;

switch (option) {

    case 1 : b.button = true ;
	     b.click();
	     break;

    case 2 : b.button = false ;
	     b.click();
	     break;

    default : cout << "Invalid choice "; 
		
}

	return 0;
}

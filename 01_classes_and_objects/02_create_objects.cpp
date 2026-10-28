#include<iostream>
#include<string>

using namespace std ;

class user {

	private : string name = "Roshan Mallick";
	          string email = "roshanmallick2025@gmail.com";
			  

	public : void display (){

             cout << "Name : " << name << endl ;
			 cout << "Email: " << email << endl ;

	        }

};

int  main () {

	user u1;

	u1.display();

	return 0;
}
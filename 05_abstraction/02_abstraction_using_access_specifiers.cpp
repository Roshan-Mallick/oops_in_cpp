#include<iostream>
#include<string>

using namespace std;

class LoginSystem {

        private : string password = "admin1234";

	bool verify_password (string input){
	      return input == password ;
	}

	public : void login (string input){
		   if (verify_password(input)) {
		     cout << "Login Successful\n";
		   } else {
		     cout << "Invalid password\n";
		   }
		 }

}; 


int main () {

  LoginSystem user;

  string pass;
  cout << "Enter you password (no space) : ";
  cin >> pass;

  user.login(pass);


	return 0;
}

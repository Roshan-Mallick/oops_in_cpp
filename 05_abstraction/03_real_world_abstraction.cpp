#include<iostream>
#include<string>

using namespace std;

class database {

	private : string mail;
		  string pass;

	 bool verify_credential (string inputMail , string inputPass) {
		    return inputMail == mail && inputPass == pass;
		 }

	public : void signup (string newMail , string newPass) {
		 
			 mail = newMail;
			 pass = newPass;

			 cout << "singup successful \n";
		 }

	         bool login (string enterMail , string enterPass) {
	            return verify_credential(enterMail,enterPass);
	         }
	         
	         void display_db () {
	         
	           cout << "Email : " << mail << endl;
	           cout << "password  : " << pass << endl;
	         
	         }

};  

int main () {


	int size;
	cout << "Enter size of database for mail and pass : ";
	cin >> size;

	database user[size];
	int user_count = 0;
	int choice ;

	while(true){
	
		cout << "\nEnter 1 for signup " << endl;
		cout << "Enter 2 for login " << endl ;
		cout << "Enter 3 for list all users "<< endl;
		cout << "Enter 4 for Exit " << endl ;
		cout << "Enter choice : ";
		cin >> choice;

		switch (choice) {
		
			case 1 : { 
			                 if (user_count >= size) {
			                   cout << "database is full\n";
			                   break;
			                 }
					 string email , password ;
					 cout << "Enter mail : ";
					 cin >> email;

					 cout<< "Enter password : ";
					 cin >> password ;

					 user[user_count].signup(email,password);
					 cout << "user created as : user" << user_count + 1 <<endl;

					 user_count++;
					 break;
				  
				 }
		
			case 2 : {
				 
					 string email , password ;
					 cout << "Enter mail : ";
					 cin >> email;

					 cout << "Enter password : ";
					 cin  >> password ;
					 
					 bool found = false ; // we dont know till now user exist or not

					 for (int i = 0 ; i < user_count ; i++){
					   if (user[i].login(email,password)){
					       cout << "login successful\n";
					       cout << "logged in as : user" << i+1 << endl; 

					       found = true ;
					       break;
					   }
					 }

					 if (!found) {
					  cout << "Mail or Password is invalid\n";
					 }

					 break;
				 }
				 
		        case 3 : {
		                         cout << "<------------ users database ------------->" << endl;
		                         for (int i = 0 ; i < user_count ; i++) {
		                            cout << "user " << i+1 << endl;
		                            user[i].display_db();
		                            
		                         }
		           
		                 }

			case 4 : return 0; //stops the program

			default : cout << "Invalid choice " << endl;
		
		}
	}
	
	return 0;
}

#include<iostream>
#include<string>

using namespace std;

class bank  {
 
  private : int balance = 100000; // hidden from direct access and modification 
				      
  public :
	 void check_balance (){
	   cout << "Balance = " << balance << endl;  	   
         }

	 void deposit ( int amount ){
           balance += amount ;
	   cout << "Balance = " << balance << endl;
	 }


	 void withdraw (int amount ){
           balance -= amount ;
	   cout << "balance = " << balance << endl;
	 }


};

int main () {

   bank a1;
   
   cout << "1 for check balance \n2 for deposit money \n3 for withdraw \n";
   cout << "Enter options : ";  

   int option;
   cin >> option ;

   int amount ;


   switch (option){
     
	   case 1 : a1.check_balance();
		    break;
	   case 2 : cout << "Enter amount = ";
		    cin >> amount ;
		    a1.deposit(amount);
		    break;
	   case 3 : cout <<"Enter amount = ";
		    cin >> amount ;
		    a1.withdraw(amount );
		    break;
	   default : cout << "invalid choice \n";
   }

return 0;
}

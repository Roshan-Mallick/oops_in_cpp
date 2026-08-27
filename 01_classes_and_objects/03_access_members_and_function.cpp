#include<iostream>
#include<string>

using namespace std;

class student {

  public : int roll;  // Public access specifier
           string name;
           
           void info () { // Member function
            
            cout << "My roll is " << roll << endl;
            cout << "My name is " << name << endl;
            
         }          
           
 };

int main () {

   student s1;
   
   s1.roll = 1177; // Access data members using the dot operator
   s1.name = "Roshan";
   
   s1.info ();  // Access the member function using the dot operator


 return 0;
 
}

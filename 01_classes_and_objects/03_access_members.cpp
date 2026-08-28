#include<iostream>
#include<string>

using namespace std;

class student {

  public : int roll;  // Public access specifier
           string name;
           
                    
 };

int main () {

   student s1;
   
   s1.roll = 1177; // Access data members using the dot operator
   s1.name = "Roshan";
   
   cout << "my roll is : " << s1.roll << endl;
   cout << "my name is : " << s1.name << endl;


 return 0;
 
}

#include<iostream>
#include<string>

using namespace std;

class student {
  
  public : string name = "Roshan Mallick ";
           int roll = 1177 ;

};

int main () {

  student s1;

  cout << "Name : " << s1.name << endl ;
  cout << "Roll : " << s1.roll << endl ;



  return 0;
}
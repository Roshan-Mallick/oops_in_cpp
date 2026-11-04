#include<iostream>
using namespace std;

class Demo {

  int password = 39393939 ;
  
  public : friend void pass_check ( Demo D , int user_pass) ;

};

  void pass_check( Demo D ,int user_pass){
     
     if (D.password == user_pass) cout << "Verified" << endl ;
  }
  
int main () {

  Demo D; 
  
  int pass = 39393939 ;
  
  pass_check(D,pass);
  

 return 0;
}

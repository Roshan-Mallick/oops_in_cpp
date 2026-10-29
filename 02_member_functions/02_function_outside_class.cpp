#include<iostream>
using namespace std;

class test {

   public : void display(); //Member function declared inside the class under public access specifier 

};

void test::display(){
   cout << "Function declared inside the class " << endl ;
   cout << "Function defined outside the class " << endl ;
}

int main () {

   test t1;

   t1.display();


   return 0;
}
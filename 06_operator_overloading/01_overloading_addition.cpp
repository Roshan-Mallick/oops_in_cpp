#include<iostream>
using namespace std;

class point {

	public : int value ;

		 point(int v){
		 
		       value = v ;	 
		 }

		 point operator+(point p){
		 
			 return point(value + p.value);
		 }

};

int main () {

	point a(4);
	point b(4);

	point c = a + b ;

	cout << "Result : " << c.value <<endl;

 return 0;

}

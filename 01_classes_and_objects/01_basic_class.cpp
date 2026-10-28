#include<iostream>
#include<string>

using namespace std ;

class student {

    public : string student_name = "Roshan Mallick";
             int roll_id = 1177 ;
             int semester = 3 ;
                

};

int main  () {

    student s1;

    cout << "Name : " << s1.student_name << endl;
    cout << "Roll ID : "<< s1.roll_id << endl ;
    cout << "Semester : " << s1.semester << endl ;

    return 0;

}
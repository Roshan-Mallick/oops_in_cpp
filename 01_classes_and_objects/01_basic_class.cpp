#include <iostream>
#include <string>

using namespace std;

class student {

public: // Access specifier

    string name; // Data member
    int roll;    // Data member

    void info() { // Member function

        cout << "Student information" << endl;

    }
};

int main() {

    return 0;
}

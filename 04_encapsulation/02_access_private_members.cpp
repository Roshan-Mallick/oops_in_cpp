#include <iostream>
#include <string>

using namespace std;

class employee {
    int id = 1177;  // Private member by default

private:
    string name = "Roshan";  // Private member

public:
    void showdata() {  // Accesses private members
        cout << "Name : " << name << endl;
        cout << "ID   : " << id << endl;
    }
};

int main() {
    employee e1;

    e1.showdata();  // Calls the public member function

    return 0;
}
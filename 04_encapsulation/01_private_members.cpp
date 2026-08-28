#include <iostream>
#include <string>

using namespace std;

class employee {
    int id = 117;  // Private by default if no access specifier is declared

private:
    string name = "Roshan";  // Accessible only inside the class
};

int main() {

    // Private members cannot be accessed directly in main()
    
    return 0;
}

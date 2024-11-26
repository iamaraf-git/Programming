#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void introduce() {
            cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
        }
};

int main() {
    Person a1; // Create an object of the Person class
    a1.name = "Araf"; // Set data members
    a1.age = 50;

    a1.introduce(); // Call the member function
    return 0;
}
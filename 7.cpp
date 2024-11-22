#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Member function to set the name using this pointer
    Person* setName(string n) {
        this->name = n;
        return this; // Return the object itself
    }

    // Member function to set the age using this pointer
    Person* setAge(int a) {
        this->age = a;
        return this; // Return the object itself
    }

    // Member function to display the person's information
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create a Person object
    Person person("Alice", 25);

    // Modify and display the person’s details using method chaining
    person.setName("Bob")->setAge(30)->display();

    return 0;
}

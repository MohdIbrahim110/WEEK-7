#include <iostream>
using namespace std;

class Compare {
private:
    int num;

public:
    // Constructor to initialize the number
    Compare(int n) : num(n) {}

    // Function to find the greatest of two numbers using this pointer
    int greatest(const Compare& other) {
        // Use this pointer to compare the member variable num with the other object’s num
        return (this->num > other.num) ? this->num : other.num;
    }

    // Function to get the value of num
    int getNumber() const {
        return num;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create two objects with the entered numbers
    Compare obj1(num1);
    Compare obj2(num2);

    // Find the greatest number using the greatest() function
    int greatestNumber = obj1.greatest(obj2);

    cout << "The greatest of the two numbers is: " << greatestNumber << endl;

    return 0;
}

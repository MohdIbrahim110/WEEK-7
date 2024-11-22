#include <iostream>
using namespace std;

int stringLength(const char* str) {
    const char* ptr = str;
    int length = 0;

    while (*ptr != '\0') { // Loop until the end of the string
        length++;
        ptr++; // Move the pointer to the next character
    }

    return length;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = stringLength(str);
    cout << "Length of the string: " << length << endl;

    return 0;
}

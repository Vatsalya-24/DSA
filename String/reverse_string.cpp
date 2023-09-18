#include <iostream>
#include <string>

int main() {
    std::string inputString, reversedString;

    // Input the string
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    // Reverse the string
    for (int i = inputString.length() - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    // Output the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString;  // Variables to hold user input

    // Repeat the input and concatenation process three times
    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);  // Get the first string

        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);  // Get the second string

        // Concatenate and display the result
        std::string concatenatedResult = firstString + secondString;
        std::cout << "Concatenated Result: " << concatenatedResult << std::endl;
    }

    return 0;  // End of program
}

#include <iostream>
#include <string>

bool isInteger(const std::string& input) {
    if (input.empty()) {
        return false;
    }

    size_t start = (input[0] == '-' || input[0] == '+') ? 1 : 0;

    //if (input[0] == '-' || input[0] == '+') ? 1 : 0;

    for (size_t i = start; i < input.length(); ++i) {
        if (!std::isdigit(input[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string userInput;
    std::cout << "Enter a value: ";
    std::cin >> userInput;

    if (isInteger(userInput)) {
        std::cout << "You entered an integer." << std::endl;
    }
    else {
        std::cout << "Not an integer." << std::endl;
    }

    return 0;
}





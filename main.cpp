#include <iostream>
#include <string>

size_t getStringLength(const std::string& str) {
    size_t length = 0;
    for (char c : str) {
        if (c == '\0') {
            break;
        }
        length++;
    }
    return length;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    size_t length = getStringLength(input);
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}

#include <iostream>
#include <cassert>

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

void testEmptyString() {
    std::string empty = "";
    assert(getStringLength(empty) == 0);
}

void testNonEmptyString() {
    std::string str = "Hello, World!";
    assert(getStringLength(str) == str.length());
}

void testStringWithNullTerminator() {
    std::string str = "Testing\0 123";
    assert(getStringLength(str) == 7);
}

int main() {
    testEmptyString();
    testNonEmptyString();
    testStringWithNullTerminator();
    
    std::cout << "All tests passed successfully." << std::endl;
    
    return 0;
}

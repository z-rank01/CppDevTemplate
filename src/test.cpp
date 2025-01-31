#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Testing C++ Development Environment Configuration" << '\n';

    std::cout << "Hello, World!" << '\n';

    std::cout << "\nChecking CMake version:" << '\n';
    std::system("\tcmake --version");

    return 0;
}
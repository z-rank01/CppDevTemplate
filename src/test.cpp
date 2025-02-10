#include <iostream>

int main() {
#ifdef _MSC_VER
    std::cout << "Compiler: MSVC" << std::endl;
    std::cout << "MSVC Version: " << _MSC_VER << std::endl;
#elif defined(__clang__)
    std::cout << "Compiler: Clang" << std::endl;
    std::cout << "Clang Version: " << __clang_version__ << std::endl;
#elif defined(__GNUC__)
    std::cout << "Compiler: GCC" << std::endl;
    std::cout << "GCC Version: " << __VERSION__ << std::endl;
#else
    std::cout << "Compiler: Unknown" << std::endl;
#endif

#ifdef CMAKE_VERSION
    std::cout << "CMake Version: " << CMAKE_VERSION << std::endl;
#else
    std::cout << "CMake Version: Unknown" << std::endl;
#endif

    return 0;
}
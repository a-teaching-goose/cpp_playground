#include "my_class.hpp"

void MyClass::a_static_function() {
    // std::cout << a_string << " " << a_number << std::endl;   // this won't compile. why?
    std::cout << "words from a_static_function" << std::endl;
}

void MyClass::a_member_function() {
    std::cout << a_string << " " << a_number << std::endl;
}

#include <iostream>

class MyClass {
private:
    std::string a_string;
    int a_number;

public:
    // constructor
    MyClass(const std::string & a_string, int a_number)  : a_string(a_string), a_number(a_number)  {}

    // setter and getter
    const std::string &getAString() const {
        return a_string;
    }

    void setAString(const std::string &aString) {
        a_string = aString;
    }

    int getANumber() const {
        return a_number;
    }

    void setANumber(int aNumber) {
        a_number = aNumber;
    }

    // a public static (belongs to the class) function
    static void a_static_function();

    // a public member (belongs to an ojbect of the class) function
    void a_member_function();
};

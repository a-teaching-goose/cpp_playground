#include "my_class.hpp" 

int main(int argc, char **argv) {
    std::cout << "let's play with C++! " << std::endl;

    // create an object of the class on the heap
    MyClass* my_class_obj_ptr = new MyClass("bootup", 2023);

    // call the member function of this class through an object
    my_class_obj_ptr->a_member_function();

    // delete the object
    delete my_class_obj_ptr;
    
    // call the static function (without through an object)
    MyClass::a_static_function();
    
    // create another object of the class on the stack
    MyClass my_class_obj("seattle ", 2024);
    
    my_class_obj.a_member_function();

    // no need to delete my_class_obj
}

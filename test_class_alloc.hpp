#ifndef __TEST_CLASS_ALLOC_HPP
#define __TEST_CLASS_ALLOC_HPP

using namespace __shedskin__;
namespace __test_class_alloc__ {

extern str *const_0, *const_1;

class Student;


extern str *__name__;
extern __ss_int result;


extern class_ *cl_Student;
class Student : public pyobj {
public:
    __ss_int age;
    str *name;

    Student() {}
    Student(str *name, __ss_int age) {
        this->__class__ = cl_Student;
        __init__(name, age);
    }
    void *__init__(str *name, __ss_int age);
};

__ss_int test_local_student();

} // module namespace
#endif

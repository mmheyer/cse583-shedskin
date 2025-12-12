#include "builtin.hpp"
#include "test_class_alloc.hpp"

namespace __test_class_alloc__ {

str *const_0, *const_1;


str *__name__;
__ss_int result;



/**
class Student
*/

class_ *cl_Student;

void *Student::__init__(str *name, __ss_int age) {
    this->name = name;
    this->age = age;
    return NULL;
}

__ss_int test_local_student() {
    __ss_int __0, __1, i, total;
    Student s_storage;
    Student *s = &s_storage;

    total = __ss_int(0);

    FAST_FOR(i,0,__ss_int(100000),1,0,1)
        s_storage = Student(const_0, __ss_int(20));
        total = (total+s->age);
    END_FOR

    return total;
}

void __init() {
    const_0 = new str("John");
    const_1 = new str("__main__");

    __name__ = new str("__main__");

    cl_Student = new class_("__main__.Student");
    if (__eq(__test_class_alloc__::__name__, const_1)) {
        result = test_local_student();
        print(__test_class_alloc__::result);
    }
}

} // module namespace

int main(int, char **) {
    __shedskin__::__init();
    __shedskin__::__start(__test_class_alloc__::__init);
}

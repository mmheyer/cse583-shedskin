#include "builtin.hpp"
#include "test_stack_alloc.hpp"

namespace __test_stack_alloc__ {

str *const_0;


str *__name__;
__ss_int result;



__ss_int test_local_tuple() {
    __ss_int __0, __1, a, b, i, total;
    tuple<__ss_int> t_storage;
    tuple<__ss_int> *t = &t_storage;
    tuple<__ss_int> __2_storage;
    tuple<__ss_int> *__2 = &__2_storage;

    total = __ss_int(0);

    FAST_FOR(i,0,__ss_int(1000000),1,0,1)
        t_storage = tuple<__ss_int>(2,i,(i+__ss_int(1)));
        __2 = t;
        __unpack_check(__2, 2);
        a = __2->__getfirst__();
        b = __2->__getsecond__();
        total = (total+(a+b));
    END_FOR

    return total;
}

void __init() {
    const_0 = new str("__main__");

    __name__ = new str("__main__");

    if (__eq(__test_stack_alloc__::__name__, const_0)) {
        result = test_local_tuple();
        print(__test_stack_alloc__::result);
    }
}

} // module namespace

int main(int, char **) {
    __shedskin__::__init();
    __shedskin__::__start(__test_stack_alloc__::__init);
}

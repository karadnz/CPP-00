ex00



ex01



ex02

static functions
std::pair
iterator / iterator.begin iterator.end
accounts( amounts, amounts + amounts_size );
std::mem_fun_ref()
std::mem_fun_ref



static

Static data members are not associated with any object. They exist even if no objects of the class have been defined. There is only one instance of the static data member in the entire program with static storage duration, unless the keyword thread_local is used, in which case there is one such object per thread with thread storage duration (since C++11).

Static data members cannot be mutable.

Static data members of a class in namespace scope have external linkage if the class itself has external linkage (is not a member of unnamed namespace). Local classes (classes defined inside functions) and unnamed classes, including member classes of unnamed classes, cannot have static data members.

https://en.cppreference.com/w/cpp/language/static#Static_member_functions

mutable

The keyword mutable is mainly used to allow a particular data member of const object to be modified. When we declare a function as const, the this pointer passed to function becomes const. Adding mutable to a variable allows a const pointer to change members. 
mutable is particularly useful if most of the members should be constant but a few need to be updatable. Data members declared as mutable can be modified even though they are the part of object declared as const. You cannot use the mutable specifier with names declared as static or const, or reference.
As an exercise predict the output of following two programs. 
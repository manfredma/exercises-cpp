#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char **argv) {
    unique_ptr<int> ptr1(new int(10));      // int智能指针
    assert(*ptr1 == 10);                     // 可以使用*取内容
    assert(ptr1 != nullptr);                // 可以判断是否为空指针

    cout << *ptr1 << endl;

    unique_ptr<string> ptr2(new string("hello"));  // string智能指针
    assert(*ptr2 == "hello");                // 可以使用*取内容
    assert(ptr2->size() == 5);               // 可以使用->调用成员函数


    shared_ptr<int> ptr21(new int(10));     // int智能指针
    assert(*ptr21 = 10);                    // 可以使用*取内容

    shared_ptr<string> ptr22(new string("hello"));  // string智能指针
    assert(*ptr22 == "hello");                      // 可以使用*取内容

//    auto ptr3 =  make_shared<int>(42);  // 工厂函数创建智能指针
//    assert(ptr3 && *ptr3 == 42);       // 可以判断是否为空指针

    shared_ptr<string> ptr4 = make_shared<string>("zelda");  // 工厂函数创建智能指针
    assert(!ptr4->empty());                   // 可以使用->调用成员函数

    int x = 10;
    std::shared_ptr<int> foo = std::make_shared<int>(x);
    // same as:
    std::shared_ptr<int> foo2(new int(x));

    shared_ptr<int> bar = std::make_shared<int>(x);

    shared_ptr<pair<int, int> > baz = std::make_shared<pair<int, int> >(x, x);

    std::cout << "*foo: " << *foo << '\n';
    std::cout << "*bar: " << *bar << '\n';
    std::cout << "*baz: " << baz->first << ' ' << baz->second << '\n';
}
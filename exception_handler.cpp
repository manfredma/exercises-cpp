/*
 * 异常是程序在执行期间产生的问题。C++ 异常是指在程序运行时发生的特殊情况，比如尝试除以零的操作。
 * 异常提供了一种转移程序控制权的方式。C++ 异常处理涉及到三个关键字：try、catch、throw。
 * throw: 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
 * catch: 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
 * try: try 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。
 * 如果有一个块抛出一个异常，捕获异常的方法会使用 try 和 catch 关键字。try 块中放置可能抛出异常的代码，try 块中的代码被称为保护代码。使用 try/catch 语句的语法如下所示：
 * try{
 * // 保护代码
 *  }catch( ExceptionName e1 )
 *  {
 *    // catch 块
 *   }catch( ExceptionName e2 )
 * {
 *  // catch 块
 * }catch( ExceptionName eN )
 * {
 *   // catch 块
 * }
 * 如果 try 块在不同的情境下会抛出不同的异常，这个时候可以尝试罗列多个 catch 语句，用于捕获不同类型的异常。
 */

#include <iostream>

using namespace std;

double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero condition!";
    }
    return (a / b);
}

struct MyException : public exception {
    const char *what() const throw() {
        return "C++ Exception";
    }
};

int main() {
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << z << endl;
    } catch (const char *msg) {
        cout << msg << endl;
    }

    try {
        throw MyException();
    }
    catch (MyException &e) {
        cout << "MyException caught" << std::endl;
        cout << e.what() << std::endl;
    }
    catch (std::exception &e) {
        //其他的错误
    }
    return 0;
}

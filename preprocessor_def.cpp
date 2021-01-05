//
// Created by 马兴方 on 2021/1/5.
//
// 预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理。
// 所有的预处理器指令都是以井号（#）开头，只有空格字符可以出现在预处理指令之前。
// 预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾。

// C++ 还支持很多预处理指令，比如 #include、#define、#if、#else、#line 等，让我们一起看看这些重要指令。

// #include          用于把头文件包含到源文件中
// #define           用于创建符号常量，一般称为 宏
// #ifdef #endif     条件编译
/*
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * # 和 ## 运算符
 * # 和 ## 预处理运算符在 C++ 和 ANSI/ISO C 中都是可用的。
 * # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串。
 * ## 运算符用于连接两个令牌
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */
/*
 * __LINE__	这会在程序编译时包含当前行号。
 * __FILE__ 这会在程序编译时包含当前文件名。
 * __DATE__	这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
 * __TIME__	这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间。
 */


#include <iostream>

using namespace std;

#define PI 3.14159
#define MIN(a, b) (a<b ? a : b)
#define DEBUG
#define MKSTR(x) #x
#define concat(a, b) a ## b

int main() {

    cout << "Value of PI :" << PI << endl;

    int i, j;
    i = 100;
    j = 30;
    cout << "较小的值为：" << MIN(i, j) << endl;

#ifdef DEBUG
    cout << "Trace: Inside main function" << endl;
#endif

#if 0
    /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif
    cout << MKSTR(HELLO C++) << endl;
    int xy = 100;
    cout << concat(x, y);
#ifdef DEBUG
    cout << "Trace: Coming out of main function" << endl;
#endif

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    return 0;
}
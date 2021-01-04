#include <iostream>

using namespace std;
const int MAX = 3;

void pointer_array();

void string_array();

int main() {
    int var[MAX] = {10, 100, 200};
    int *ptr;

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++) {
        cout << "var[" << i << "]的内存地址为 ";
        cout << ptr << endl;

        cout << "var[" << i << "] 的值为 ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }

    for (int i = 0; i < MAX; i++) {
        *(var + i) = i;    // 这是正确的语法
    }
    ptr = var;
    for (int i = 0; i < MAX; i++) {
        cout << "var[" << i << "]的内存地址为 ";
        cout << ptr << endl;

        cout << "var[" << i << "] 的值为 ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }

    pointer_array();
    string_array();
    return 0;
}

void pointer_array() {
    int var[MAX] = {10, 100, 200};
    int *ptr[MAX];
    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // 赋值为整数的地址
    }
    for (int i = 0; i < MAX; i++) {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
}

void string_array() {
    const char *names[MAX] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali"
    };

    for (int i = 0; i < MAX; i++) {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
    }
}

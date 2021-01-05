#include <iostream>

using namespace std;

class Box {
public:
    Box() {
        cout << "调用构造函数！" << endl;
    }

    ~Box() {
        cout << "调用析构函数！" << endl;
    }
};

int main() {
    /* 普通示例 */
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存

    *pvalue = 29494.99;     // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;

    delete pvalue;         // 释放内存

    /* 三维数组示例 */
    int i, j, k;   // p[2][3][4]

    int ***p;
    p = new int **[2];
    for (i = 0; i < 2; i++) {
        p[i] = new int *[3];
        for (j = 0; j < 3; j++)
            p[i][j] = new int[4];
    }

    //输出 p[i][j][k] 三维数据
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                p[i][j][k] = i + j + k;
                cout << p[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // 释放内存
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            delete[] p[i][j];
        }
    }
    for (i = 0; i < 2; i++) {
        delete[] p[i];
    }
    delete[] p;

    /* 对象数组示例 */
    Box *myBoxArray = new Box[4];

    delete[] myBoxArray; // 删除数组
    return 0;
}
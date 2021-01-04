#include <iostream>
#include <ctime>

using namespace std;

// 在写函数时应习惯性的先声明函数，然后在定义函数
void getSeconds(unsigned long *par);

double getAverage(const int *arr, int size);

int *getRandom();

int main() {
    unsigned long sec;

    getSeconds(&sec);

    // 输出实际值
    cout << "Number of seconds :" << sec << endl;


    // 带有 5 个元素的整型数组
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // 传递一个指向数组的指针作为参数
    avg = getAverage(balance, 5);

    // 输出返回值
    cout << "Average value is: " << avg << endl;


    // 一个指向整数的指针
    int *p;

    p = getRandom();
    for (int i = 0; i < 10; i++) {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}

void getSeconds(unsigned long *par) {
    // 获取当前的秒数
    *par = time(nullptr);
}

double getAverage(const int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i) {
        sum += arr[i];
    }

    avg = double(sum) / size;

    return avg;
}

// 要生成和返回随机数的函数
int *getRandom() {
    static int r[10];

    // 设置种子
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }

    return r;
}
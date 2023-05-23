#include <iostream>
#include <cmath>
using namespace std;

void xxx(int[]);

double xxx2(double (*fun)(double), double x1, double x2) {
    return fun(x1) + fun(x2);
}

int main(int argc, char **argv, char **env) {

    cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; ++i) {
        cout << *argv << endl;
    }

    while (*env) {
        cout << *env++ << endl;
    }

    int i = 10;
    const int *ip = &i;
    cout << ip << endl << *ip << endl;


    int *a = (int *) malloc(i * sizeof(int));
    int *b = new int[i];

    int c[2];
    int d[2];

    int e[2][2] = {3, 3, 2, 1};

    cout << (a) << endl;
    cout << (b) << endl;
    cout << "C:" << endl;
    cout << (c) << endl;
    cout << (c + 1) << endl;
    cout << (c + 2) << endl;
    cout << "D:" << endl;
    cout << (d) << endl;
    cout << (d + 1) << endl;
    cout << (d + 2) << endl;
    cout << "int长度：\t" << sizeof(int) << endl;
    cout << "long长度：\t" << sizeof(long) << endl;
    cout << "数组长度：\t" << sizeof(e) << endl;
    cout << "指针长度：\t" << sizeof(void *) << endl;
    cout << "argv长度：\t" << sizeof(argv) << endl;
    cout << "env长度：\t" << sizeof(env) << endl;

    cout << xxx2(sin, 1.0, 2.0) << endl;
    cout << xxx2(cos, 1.0, 2.0) << endl;

    return 0;
}


void xxx(int x[]) {

}


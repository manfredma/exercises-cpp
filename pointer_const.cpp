#include <iostream>

using namespace std;

int main() {
    int i = 10;
    const int *ip = &i;
    cout << ip << endl << *ip << endl;

    const int i2 = 10;


    int *a = (int *) malloc(i * sizeof(int));
    int *b = new int[i];

    int c[2];
    int d[2];

    for (int j = 0; j < i; ++j) {
        cout << a[j] << endl;
        cout << b[j] << endl;
    }
    cout << (a)<< endl;
    cout << (b) << endl;
    cout << "C:" << endl;
    cout << (c) << endl;
    cout << (c+1) << endl;
    cout << (c+2) << endl;
    cout << "D:" << endl;
    cout << (d) << endl;
    cout << (d+1) << endl;
    cout << (d+2) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;



    return 0;
}



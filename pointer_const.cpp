#include <iostream>

using namespace std;

int main() {
    int i = 10;
    const int *ip = &i;
    cout << ip << endl << *ip << endl;

    const int i2 = 10;


    int *a = (int *) malloc(i * sizeof(int));
    int *b = new int[i];

    for (int j = 0; j < i; ++j) {
        cout << a[j] << endl;
        cout << b[j] << endl;
    }
    cout << *(a - 2)<< endl;
    cout << *(b - 2) << endl;

    return 0;
}



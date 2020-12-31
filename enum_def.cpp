#include<iostream>

using namespace std;

int main() {
    enum color {
        red, green = 8, blue
    } c;

    c = blue;

    cout << "c = " << c << endl;

    return 0;
}

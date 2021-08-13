#include<iostream>

using namespace std;

int main() {
    enum color {
        red, green = 8, blue
    };

    color c = blue;

    cout << "c = " << c << endl;

    enum {
        red_2, green_2 = 10
    };

    cout << red_2 << " " << green_2 << endl;
    return 0;
}

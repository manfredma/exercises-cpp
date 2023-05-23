#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct Jose {
    int code;

    Jose *next;
};

int n;
int begin;
int m;

Jose *pivot;
Jose *pCur;

void assign();

Jose *initial();

void count(int m);

void process();

int main() {
    assign();
    Jose *pJose = initial();
    process();
    cout << "\n 12 the winner is: " << pCur->code << endl;
    delete[] pJose;
}

void assign() {
    cout << "please input the number, begin, count: " << endl;
    cin >> n >> ::begin >> m;

    if (n < 2) {
        cerr << "bad number of boys" << endl;
        exit(1);
    }

    if (::begin < 0) {
        cerr << "bad begin position" << endl;
        ::exit(1);
    }

    if (m < 0 || m > n) {
        cerr << "bad interval number" << endl;
        ::exit(1);
    }


}

Jose *initial() {
    Jose *px = new Jose[n];
    for (int i = 0; i < n; ++i) {
        px[i].next = &px[(i + 1) % n];
        px[i].code = i + 1;
        cout << setw(4) << i;
    }
    cout << endl;
    pCur = &px[(::begin - 1) % n];
    return px;
}

void count(int m) {
    for (int i = 0; i < m; ++i) {
        pivot = pCur;
        pCur = pivot->next;
    }
}

void process() {
    for (int i = 1; i < n; ++i) {
        count(m);
        cout << setw(4) << pCur->code;
        pivot->next = pCur->next;
        pCur = pivot;
    }
}


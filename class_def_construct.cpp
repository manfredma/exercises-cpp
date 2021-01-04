#include <iostream>

using namespace std;

class Line {
public:
    void setLength(double len);

    double getLength(void);

    Line();  // 这是构造函数
    Line(double len);  // 这是构造函数
    ~Line();  // 这是析构函数声明

private:
    double length;
};

// 成员函数定义，包括构造函数
Line::Line(void) {
    cout << "Object is being created" << endl;
}

// 成员函数定义，包括构造函数
Line::Line(double len) : length(len) {
    cout << "Object is being created, length = " << len << endl;
}

Line::~Line(void) {
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength(void) {
    return length;
}

// 程序的主函数
int main() {
    Line line;

    // 设置长度
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    Line line2(10.0);

    // 获取默认设置的长度
    cout << "Length of line : " << line2.getLength() << endl;
    // 再次设置长度
    line2.setLength(6.0);
    cout << "Length of line : " << line2.getLength() << endl;
    return 0;
}
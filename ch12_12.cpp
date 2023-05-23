#include <iostream>
#include <cstring>

using namespace std;

class StudentId {
public:
    StudentId(int id = 0) {
        value = id;
        cout << "Assigning student id: " << value << endl;
        cout << "Assigning student id: " << this << endl;
    }

    ~StudentId() {
        cout << "Destructing student id: " << value << endl;
    }

    int getValue() {
        return value;
    }

private:
    int value;
    int age;
};

class Student {
public:
    Student(char *pName = "no name", int ssId = 0) {
        cout << "id begin ~" << &id << endl;
        cout << "Constructing student" << pName << endl;

        strncpy(name, pName, sizeof(name));

        name[sizeof name - 1] = '\0';
        id = *(new StudentId(ssId));
        cout << "id end ~ : " << &id << ":" << id.getValue() << endl;
    }

private:
    StudentId id;

    char name[20];
};

int main() {
    Student("Randy", 9818);
    // Student("Jenny");

    cout << sizeof(StudentId) << endl;
    cout << sizeof(Student) << endl;
}
#include <iostream>
using namespace std;

class MyList {
private:
    int* arr;
    int size;
public:
    MyList() {
        arr = nullptr;
        size = 0;
    }
    MyList(int sz) {
        arr = new int[sz];
        size = sz;
    }
    ~MyList() {
        delete[] arr;
    }
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        }
        else {
            cout << "Invalid index!" << endl;
            exit(-1);
        }
    }
};

int main() {
    MyList list(5);
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;
    list[3] = 40;
    list[4] = 50;

    cout << list[0] << endl;
    cout << list[2] << endl;

    return 0;
}
#include <iostream>

using namespace std;

void max(int x, int y) {
    if (x > y)
        cout << x << endl;
    else
        cout << y << endl;
}
void modify(int &x, int &y) {
    x = x + 2;
    y = y + 2;

    cout << x << " " << y << endl;
}

int main() {
    int a = 2, b = 3;//최대값 출력
    max(a, b);//값의 변화
    modify(a, b);//값의변화
    cout << a << " " << b<< endl;
    return 0;
}
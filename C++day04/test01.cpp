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
    int a = 2, b = 3;//�ִ밪 ���
    max(a, b);//���� ��ȭ
    modify(a, b);//���Ǻ�ȭ
    cout << a << " " << b<< endl;
    return 0;
}
#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
//�ֻ��� ���� 2���� �ֻ����� ���� ǥ���ϴ� ���α׷� �ֻ����� ������ ������ ���� ���;��Ѵ� ���� ������ �����ϴ��ڵ尡 �ʿ��ϴ�
int main() {
	
	srand(time(NULL));//�ð��� ���ڰ����� ����
	int dice01 = (rand() % 6) + 1;//1~6������ ���� �߻�
	int dice02 = (rand() % 6) + 1;//1~6������ ���� �߻�

	cout << "�� �ֻ����� ��: " << dice01 + dice02 << endl;
	return 0;
}
#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
//주사위 게임 2개의 주사위의 합을 표시하는 프로그램 주사위를 던지면 랜덤한 수가 나와야한다 따라서 난수를 생성하는코드가 필요하다
int main() {
	
	srand(time(NULL));//시간을 종자값으로 설정
	int dice01 = (rand() % 6) + 1;//1~6사이의 난수 발생
	int dice02 = (rand() % 6) + 1;//1~6사이의 난수 발생

	cout << "두 주사위의 합: " << dice01 + dice02 << endl;
	return 0;
}
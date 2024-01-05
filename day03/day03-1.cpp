#include <stdio.h>

int main() {

	// ram:변수, 데이터 타입
	//output:출력,input:입력
	//operater: 연산자


	//산술연산자
	//+,-,*,/(나눗셈),%(나머지)
	//5%2=1
	//5/2=2

	//대입 연산자
	// =,+=(대입연산자)
	int a = 1;//1
	//a = a + 10;//11
	a += 10;
	a += 100;//111


	//비교 연산자
	//>,<,>=,<=,==(같다), !=(다르다)
	//boolean =yes or no
	//boolean a = true or false
	//int a =1(true) or 0(false);
	//비교 연산자의 결과값: 1,0

	//논리 연산자(집합)
	//&&(and): 모두 TRUE이어야만 TRUE
	//||(or): 하나라도 TRUE 면 TRUE
	//!(NOT): 부정[반대]
	//드모르간 법칙 적용:
	printf("%d", !(3 <= 1) || !(5 <= 1));
	printf("%d", (3 > 1) && (5 > 1));

	//1)100이하의 양의 정수를 입력받고
	//	10자리와 1자리를 출력하는 프로그램
	int num;
	printf("100 이하의 양의 정수:");
	scanf_s("%d",&num );
	printf("10의 자리:%d", 1의 자리 : % d, num / 10, num % 10);

	int a = 1;
	a++; //2
	a++: //3
	printf("%d", a++); //3
	printf("%d", a);//4
	printf("%d", ++a); //3
	//4

	//삼향연산자
	// 조건 ? 값: 값
	//char a = 3 > 1 ? 'a' : 'b';
	//두 정수를 입력받고, 큰 수 출력하기
	//영어 점수 입력받고, 70 이상이면 A, 아니면 F
	printf("첫번째 정수:");
	scanf_s("%d", &b);
	printf("두 번재 정수:");
	scanf_s("%d", &b);
	
	int eng;
	printf("영어 점수:");
	scanf_s("%d", &eng);
	printf("결과는 %c 입니다.", eng > 70 ? 'a' : 'F');





























	remain 0;
}
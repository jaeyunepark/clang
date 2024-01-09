#include <stdio.h>

int main() {

	/*int math = 70;
	switch (math) {
	case 70:
	case 80:
	}*/

	
	
	
	//char alpha = 'b';

	//switch (alpha) {
	//case 'a' :
	//	printf("a를 선택하셨군요!");
	//	break; //break필수!
	//case 'b':
	//	printf("b를 선택하셨군요!");
	//	break; //break필수!
	//default:
	//	printf("선택하신 알파벳이 없음");
	//	break; //break필수!
	//}




	int month;
		printf("달입력:");
	scanf_s("%d", &month);
	switch (month) {
	case '1':
		printf("1월");
		break;
	case '2':
		printf("2월");
		break;
	case '3':
		printf("3월");
		break;
	}










	return 0;
}

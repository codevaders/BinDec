#include <stdio.h>

// C를 사용할 때는 main 함수의 반환형을 int로 하는 것이 표준입니다.
// C++에서는 int main이라는 표현은 기본적으로 금지되어있습니다. 
int main(void) // void main()
{
	int i;
	int input;
	
	while(1) {
		printf("10진수 -> 2진수 변환기\n");
		printf("0을 입력시 프로그램이 종료됩니다.\n");
		printf("\n");
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		if (input == 0)
			break;
		printf("2진수 : ");
		for(i = 0; i < 16; i++)
			printf("%d", (input >> 15 - i) & 0x1);
		printf("\n"); 
	}
	
	// 프로그램이 정상적으로 종료되었다는 의미로 0을 반환합니다. 
	return 0;
}

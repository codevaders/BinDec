#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_INPUT_LEN	256

// 32비트 정수를 획득합니다. 실패시 0을 반환합니다.
long read_int32();

// C를 사용할 때는 main 함수의 반환형을 int로 하는 것이 표준입니다.
// C++에서는 void main이라는 표현은 기본적으로 금지되어있습니다.
// 이전 버전에서 int main이 금지되어있다고 작성했는데, 오류입니다. 
int main(void) // void main()
{
<<<<<<< HEAD
	int i;
	short input;
	
	printf("10진수 -> 2진수 변환기\n");
	printf("0을 입력시 프로그램이 종료됩니다.\n");
	printf("\n");
	
	while(1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		
		if(input == 0)
			break;
		printf("2진수 : ");
		for(i = 0; i < 16; i++)
			printf("%d", (input >> 15 - i) & 0x1);
		printf("\n");
		printf("\n");
	}
	
	// 프로그램이 정상적으로 종료되었다는 의미로 0을 반환합니다. 
	return 0;
=======
    int i;
    long input;

    printf("10진수 -> 2진수 변환기\n");
    printf("0을 입력시 프로그램이 종료됩니다.\n");
    printf("\n");

    while (1) {
        printf("정수를 입력하세요 : ");
        input = read_int32(); // scanf("%d", &input);

        // 입력된 정수가 0이라면 반복문을 종료합니다.
        if (input == 0)
            break;

        // 2진수를 출력합니다.
        printf("2진수 : ");
        for (i = 0; i < 16; i++) {
            // (15 - i)만큼 input을 쉬프트 하여
            // 왼쪽에서 (i + 1)번째 자리의 비트를 1의 자리로 맞춘 후,
            // 이것이 1인지 확인하여 출력합니다.
            printf("%d", (input >> (15 - i)) & 0x1);
        }

        printf("\n");
        printf("\n");
    }

    // 프로그램이 정상적으로 종료되었다는 의미로 0을 반환합니다. 
    return 0;
}

// 32비트 정수를 획득합니다. 실패시 0을 반환합니다.
long read_int32() {
    static char input[MAX_INPUT_LEN];
    long result = 0;

    // 사용자로부터 문자열을 획득합니다. 
    scanf("%s", input);

    // 문자열-정수로 변환을 시도합니다.
    result = strtol(input, NULL, 10);

    // 변환한 정수를 반환합니다.
    return result;
>>>>>>> 2f2d53f5917bc1f2b132f215d8d0d69dfd32e4c8
}

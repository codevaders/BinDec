#include <stdio.h>
void main()
{
	int i;
	int input;
	
	while(1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		if(input == 0)
			break;
		printf("2진수 : ");
		for(i = 0; i < 16; i++)
			printf("%d", (input >> 15 - i) & 0x1);
		printf("\n"); 
	}
}


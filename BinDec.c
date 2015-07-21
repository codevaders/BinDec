#include <stdio.h>
void to_binary(int input);
void main()
{
	int input;
	
	while(1) {
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		if(input == 0)
			break;
		printf("2진수 : ");
			to_binary(input);
		printf("\n"); 
	}
}
void to_binary(int input)
{
	if(input < 0)
		return;
	if(input >= 2) {
		to_binary(input / 2);
		printf("%d", input % 2);
	}
	else
		printf("%d", input);
}

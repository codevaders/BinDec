#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_INPUT_LEN	256

// 32��Ʈ ������ ȹ���մϴ�. ���н� 0�� ��ȯ�մϴ�.
long read_int32();

// C�� ����� ���� main �Լ��� ��ȯ���� int�� �ϴ� ���� ǥ���Դϴ�.
// C++������ void main�̶�� ǥ���� �⺻������ �����Ǿ��ֽ��ϴ�.
// ���� �������� int main�� �����Ǿ��ִٰ� �ۼ��ߴµ�, �����Դϴ�. 
int main(void) // void main()
{
<<<<<<< HEAD
	int i;
	short input;
	
	printf("10���� -> 2���� ��ȯ��\n");
	printf("0�� �Է½� ���α׷��� ����˴ϴ�.\n");
	printf("\n");
	
	while(1) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &input);
		
		if(input == 0)
			break;
		printf("2���� : ");
		for(i = 0; i < 16; i++)
			printf("%d", (input >> 15 - i) & 0x1);
		printf("\n");
		printf("\n");
	}
	
	// ���α׷��� ���������� ����Ǿ��ٴ� �ǹ̷� 0�� ��ȯ�մϴ�. 
	return 0;
=======
    int i;
    long input;

    printf("10���� -> 2���� ��ȯ��\n");
    printf("0�� �Է½� ���α׷��� ����˴ϴ�.\n");
    printf("\n");

    while (1) {
        printf("������ �Է��ϼ��� : ");
        input = read_int32(); // scanf("%d", &input);

        // �Էµ� ������ 0�̶�� �ݺ����� �����մϴ�.
        if (input == 0)
            break;

        // 2������ ����մϴ�.
        printf("2���� : ");
        for (i = 0; i < 16; i++) {
            // (15 - i)��ŭ input�� ����Ʈ �Ͽ�
            // ���ʿ��� (i + 1)��° �ڸ��� ��Ʈ�� 1�� �ڸ��� ���� ��,
            // �̰��� 1���� Ȯ���Ͽ� ����մϴ�.
            printf("%d", (input >> (15 - i)) & 0x1);
        }

        printf("\n");
        printf("\n");
    }

    // ���α׷��� ���������� ����Ǿ��ٴ� �ǹ̷� 0�� ��ȯ�մϴ�. 
    return 0;
}

// 32��Ʈ ������ ȹ���մϴ�. ���н� 0�� ��ȯ�մϴ�.
long read_int32() {
    static char input[MAX_INPUT_LEN];
    long result = 0;

    // ����ڷκ��� ���ڿ��� ȹ���մϴ�. 
    scanf("%s", input);

    // ���ڿ�-������ ��ȯ�� �õ��մϴ�.
    result = strtol(input, NULL, 10);

    // ��ȯ�� ������ ��ȯ�մϴ�.
    return result;
>>>>>>> 2f2d53f5917bc1f2b132f215d8d0d69dfd32e4c8
}

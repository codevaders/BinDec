#include <stdio.h>
#include <stdlib.h>     /* strtol()  */
#include <string.h>     /* strcpy()  */

#define MIN_INPUT_VAL   -2147483647
#define MAX_INPUT_VAL   2147483647

#define MAX_INPUT_LEN   255

#define LEAD_BIT        32

long read_int(void)
{
  static char input[MAX_INPUT_LEN];
  long result = 0;

  scanf("%s", &input);
  if(strcmp(input, "Quit") == 0) return -2147483648;

  result = strtol(input, NULL, 10);
  /* strtol: http://man7.org/linux/man-pages/man3/strtol.3.html */

  return result;
}

void calc(long decimal_number)
{
  int i;

  for(i = 0; i < LEAD_BIT; i++)
  {
    /*
    (15 - i)만큼 input을 쉬프트 하여
    왼쪽에서 (i + 1)번째 자리의 비트를 1의 자리로 맞춘 후,
    이것이 1인지 확인하여 출력합니다.
    */
    printf("%d", (decimal_number >> (LEAD_BIT - (i + 1))) & 0x1);
  }
  printf("\n");
}

int main(int argc, char *argv[])
{
  int x = EXIT_FAILURE;
  long input;

  if(argc == 1)
  {
    /* method 1: prompt */

    printf("Decimal to Binary Converter\n");
    printf("Escape command is \"Quit\".\n");

    while(x == EXIT_FAILURE)
    {
      printf("\nIn: ");
      input = read_int();

      switch(input)
      {
        case -2147483648:
          x = EXIT_SUCCESS;
          break;

        case 0:
          printf("Error: Not a number\n");
          break;

        default:
          if(input < MIN_INPUT_VAL) printf("Warn: Input is too small\n");
          if(input > MAX_INPUT_VAL) printf("Warn: Input is too big\n");
          printf("Out: ");

          calc(input);
          break;
      }
    }
  }
  else
  {
    /* method 2: parameter passing */

    static char arg[MAX_INPUT_LEN];
    strcpy(arg, argv[1]);

    input = strtol(arg, NULL, 10);

    switch(input)
    {
      case 0:
        printf("Error: Not a number\n");
        x = EXIT_FAILURE;
        break;

      default:
        calc(input);
        x = EXIT_SUCCESS;
        break;
    }
  }
  return x;
}


#include <stdio.h>

// void printBinary(int num1)
// {
//     if (num1 > 1)
//     {
//         printBinary(num1 / 2);
//     }
//     printf("%d", num1 % 2);
// }

int main()
{
    int num;
    printf("Enter the numner : ");
    scanf("%d", &num);

    printf("Integer number      :   %d\n", num);
    printf("Binary number       :   ");
    // printBinary(num);
    // printf("\n");
    printf("Octal number        :   %o\n", num);
    printf("Hexadecimal number  :   %X\n", num);

    return 0;
}
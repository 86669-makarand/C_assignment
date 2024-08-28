#include <stdio.h>
//                                      Factorial
int factorial;
int main()
{

    int number;

    printf("Enter the number : ");
    scanf("%d", &number); // 5

    int i, res = 1;
    for (i = 1; i <= number; i++)
    {
        res = res * i;
    }
    printf("factorial : %d", res);
}

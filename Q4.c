#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int total_marks;
    printf("Enter marathi marks :");
    scanf("%d", &m1);
    printf("Enter English marks :");
    scanf("%d", &m2);
    printf("Enter Hindi marks   :");
    scanf("%d", &m3);
    printf("Enter maths marks   :");
    scanf("%d", &m4);
    printf("Enter Science marks :");
    scanf("%d", &m5);
    total_marks = m1 + m2 + m3 + m4 + m5;
    printf("Total marks :   %d\n\n", total_marks);

    if (total_marks >= 90)
        printf("Grade   :   Ex.");

    else if (90 > total_marks >= 80)
        printf("Grade   :   A");

    else if (80 > total_marks >= 70)
        printf("Grade   :   B");

    else if (80 > total_marks >= 70)
        printf("Grade   :   B");

    else if (70 > total_marks >= 60)
        printf("Grade   :   C");

    else
        printf("Grade   :   F");
    return 0;
}

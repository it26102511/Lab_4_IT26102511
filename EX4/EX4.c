#include <stdio.h>

int main(void)
{
    float section1, section2, section3, average;

    printf("Enter section 1 score: ");
    scanf("%f", &section1);
    printf("Enter section 2 score: ");
    scanf("%f", &section2);
    printf("Enter section 3 score: ");
    scanf("%f", &section3);

    average = (section1 + section2 + section3) / 3;

    if (section1 >= 70 && section2 >= 70 && section3 >= 70 && average >= 75)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}

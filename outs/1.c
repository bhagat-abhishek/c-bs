#include <stdio.h>

int main()
{
    // Program to check if a number is a natural number

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Natural Number \n");
    } else {
        printf("Not a natural number\n");
    }

}
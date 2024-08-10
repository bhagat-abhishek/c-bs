#include <stdio.h>

int main()
{
    /*
     *
     * Print the sum of first (n) numbers given by a user
     *   e.g. (3) User input
     *   output = 6 [1+2+3]
     *
     */

    int n;
    int out = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        out = out + i;
    }

    printf("Sum of number %d is %d\n", n, out);

    // Printing the numbers in reverse
    printf("Reversed Numbers\n");

    for (int i = n; i >= 1; i--)
    {
        printf("%d \n", i);
    }

    return 0;
}
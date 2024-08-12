#include <stdio.h>

// Functions

float area_of_square(float a);
float area_of_rectangle(float a, float b);
float area_of_circle(float r);

int main()
{

    printf("%f \n", area_of_circle(5));
    printf("%f \n", area_of_rectangle(5, 6));
    printf("%f \n", area_of_square(5));

    return 0;
}

float area_of_square(float a)
{
    return a * a;
}

float area_of_rectangle(float a, float b)
{
    return a * b;
}

float area_of_circle(float r)
{

    return 3.14 * r * r;
}
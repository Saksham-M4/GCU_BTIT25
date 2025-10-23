# include <stdio.h>
# include <conio.h>
void main()

{
    float a, b;
    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);
    float sum, average;
    sum = a +b;
    average = sum/2;
    printf("The sum %f and average value %f", sum, average);

}
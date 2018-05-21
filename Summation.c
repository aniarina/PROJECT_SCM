#include<stdio.h>

void getSum(int, int);
void main()
{
    int num1, num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    getSum(num1,num2);

    return 0;
}

void getSum(int num1, int num2)
{
    int sum;
    sum = num1+num2;
    printf("the sum is %d",sum);
}

#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;

    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(void)
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping\n");
    printf("--------------------\n");
    printf("First number: %d\nSecond number: %d\n", num1, num2);
    printf("\nAfter swapping\n");
    printf("--------------------\n");
    swap(&num1, &num2);
    printf("First number: %d\nSecond number: %d", num1, num2);
}
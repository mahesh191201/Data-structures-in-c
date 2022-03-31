#include <stdio.h>

int factorial(int number)
{
    if (number == 1 || number == 0)
    {

        return 1;
    }
    
        return (number * factorial(number - 1));
}

int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);

    printf("%d", factorial(num));

    return 0;
}
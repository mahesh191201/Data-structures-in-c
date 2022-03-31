#include<stdio.h>
int main()
{

    int a, b, temp=0;
    printf("enter a value\n");
    scanf("%d", &a);
     printf("enter b value\n");
    scanf("%d", &b);
    
    temp=a;
    a=b;
    b=temp;
    printf("The value of a and b after swap is a=%d and b=%d", a,b);

    return 0;


}
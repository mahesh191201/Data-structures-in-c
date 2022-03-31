#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
int a, b, c;
printf("enter two numbers: ");
scanf("%d %d", &a, &b);
c=sum(a, b);

printf("%d", c);

return 0;


}

#include<stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
int main()
{
    int x=10;
    int y=20;
    swap(x,y);
    

return 0;
}
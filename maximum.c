#include<stdio.h>
int maximum(int a, int b, int c, int d){
if(a>b && a>c && a>d){
    return a;
}
else if(b>c && b>d){
    return b;
}
else if(c>d){
        return c;
}
else{
    return d;
}
}

int main()
{
int a,b,c,d,e;
printf("enter 4 nums\n");
scanf("\n%d %d %d %d", &a, &b, &c, &d);
e=maximum(a,b,c,d);
printf("the biggest number is %d\n", e);
return 0;

}




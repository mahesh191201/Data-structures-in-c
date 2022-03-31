#include<stdio.h>
struct student{

int marks;
char fav_char;

};
int main()
{
    struct student mahesh, andrew, peter, jenny;
mahesh.marks=100;
andrew.marks=99;
peter.marks=90;
jenny.marks=95;
mahesh.fav_char='s';
andrew.fav_char='bt';
printf("%d\n", mahesh.marks);
printf("%c", andrew.fav_char);

   return 0;
}

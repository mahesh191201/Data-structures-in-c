#include<stdio.h>
int main()
{

 int id[] = {99, 96, 96, 98, 9};
 printf("address at position 0 %d\n", &id[0]);
 printf("address at position 1 %d\n", id+1);
printf("address at position 1 %d\n", &id[1]);

 printf("value at position 0 %d\n", *(&id[0]));
 printf("value at position 1 %d\n", *(id+1));
printf("value at position 1 %d\n", *(&id[1]));
return 0;
}

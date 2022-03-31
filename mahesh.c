#include<stdio.h>
int main()
{
    int a[50], i, size, num, pos;
    printf("enter the size of array: ");
     scanf("%d", &size);
     printf("enter the elements in array: ");
     for(i=0;i<size; i++){
        scanf("%d", &a[i]);
     }
  //  printf("the number you want to insert: ");
    //scanf("%d", &num);
    printf("the position you want to delete: ");
     scanf("%d", &pos);
     for(i=pos-1; i<size-1; i++){
            a[i]=a[i+1];
            }

            size--;
            for(i=0; i<size; i++){
                printf("%d\n", a[i]);
            }
            return 0;


}


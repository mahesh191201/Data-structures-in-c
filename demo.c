#include<stdio.h>
int main()
{
    int arr[10];

    int i, size, num, index;
    scanf("%d", &size);
    scanf("%d", &num);
    scanf("%d", &index);

printf("enter the array\n");

    for(i=0; i<size; i++){
        scanf("%d\n", &arr[i]);
    }
printf("\n");

    for(i=size-1; i>=index; i--){

        arr[i+1]=arr[i];
    }

    arr[index]=45;
    size++;
    for(i=0; i<size; i++ ){

        printf("%d\n\n", arr[i]);
    }

    return 0;
}


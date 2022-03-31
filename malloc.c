#include<stdio.h>
int main()
{
    int*ptr;
    int n;
    printf("enter the size of array u want to create\n");
    scanf("%d", &n);
   ptr= (int*)malloc(n*sizeof(int));
   for(int i=0; i<n; i++){
   printf("enter the values: ");
       scanf("%d", &ptr[i]);

}
    for(int i=0; i<n; i++){
        printf("%d\n",ptr[i]);
    }

     ptr= (int*)calloc(n, sizeof(int));
for(int i=0; i<n; i++){
    printf("enter the values: ");
    scanf("%d", &ptr[i]);
}
    for(int i=0; i<n; i++){
        printf("%d\n",ptr[i]);
    }

    printf("enter the new size of array u want to create\n");
    scanf("%d", &n);

     ptr= (int*)realloc(ptr, n*sizeof(int));
for(int i=0; i<n; i++){
    printf("enter the values: ");
    scanf("%d", &ptr[i]);
}
    for(int i=0; i<n; i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);

    return 0;
}

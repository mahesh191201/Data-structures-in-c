#include <stdio.h>
int main()
{
    int arr [10];

    int i, size, num, index;
    printf("enter the size\n");
    scanf("%d", &size);
    printf("enter the num\n");
    scanf("%d", &num);
    printf("enter the index\n");
    scanf("%d", &index);

    printf("enter the array\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    printf("\n");

    for (i = size - 1; i >= index; i--)
    {

        arr[i + 1] = arr[i];
    }

    arr[index] = num;
    size++;
    for (i = 0; i < size; i++)
    {

        printf("%d\n", arr[i]);
    }

    return 0;
}

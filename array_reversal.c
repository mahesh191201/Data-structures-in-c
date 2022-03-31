#include <stdio.h>

void arrayrev(int arr[])
{

  //  int arr[] = {1, 2, 3, 4, 5, 6, 49, 50};
    
    int temp;
    for (int i = 0; i < 8/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[7 - i];
        arr[7 - i] = temp;
    }
}

void arrprint(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 49, 50};

    printf("The reverse of array is\n");

    printf("\n before reversal\n");
    arrprint(arr);
    printf("\n after reversal\n");
    arrayrev(arr);
    arrprint(arr);

    return 0;
}

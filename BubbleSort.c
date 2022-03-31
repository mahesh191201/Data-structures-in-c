#include <stdio.h>

void printArray(int arr[], int n)
{
   
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int arr[], int n)
{
    int temp;
    int isSorted;
      printf("After sorting\n");
    for (int i = 0; i < n; i++)
    { 
      
      isSorted=0;
        for (int j = 0; j < n - 1 - i; j++)
        {    
            if (arr[j] > arr[j + 1])
            {   
                 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted=1;
            }
        }
    
    }

}

int main()
{
    int arr[] = {42, 12, 9, 63, 28, 81};
    int n = 6;
    printArray(arr, n);
    BubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
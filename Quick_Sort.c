#include <stdio.h>
void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int Partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {

        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            
        }
    } while (i < j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}

void quicksort(int a[] , int low, int high)
{
    int partitionindex;
    if (low < high)
    {
        partitionindex = Partition(a, low, high);
        PrintArray(a, 7);
        quicksort(a, low, partitionindex - 1);
        quicksort(a, partitionindex + 1, high);
    }
}

int main()
{
    int a[] = {42, 12, 9, 63, 28, 81, 0};
    int n = 7;
    PrintArray(a, n);
    quicksort(a, 0, n - 1);
    PrintArray(a, n);

    return 0;
}
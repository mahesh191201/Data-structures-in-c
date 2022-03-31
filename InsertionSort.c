

#include <stdio.h>
void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

}

void InsertionSort(int*a, int n)
{  
    int key;
    int j;
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;  
    }
    

}

int main()
{
    int a[] = {9, 4, 16, 64, 49, 25};
    
    int n = 6;
    PrintArray(a, n);
    InsertionSort(a, n);
    PrintArray(a, n);
    return 0;
}
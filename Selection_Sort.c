#include <stdio.h>
void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void SelectionSort(int *a, int n)
{
    printf("Selection sort algo is working. . . \n");
    int MinIndex;
    int temp;
  for (int i = 0; i < n; i++)
  {
      MinIndex=i;
      for (int j = i+1; j < n; j++)
      {
         if (a[j]<a[MinIndex])
         {
            MinIndex=j;
         }
         
      }
      temp=a[i];
      a[i]=a[MinIndex];
      a[MinIndex]=temp;
  }
  
}
int main()
{
    int a[] = {16, 64, 49, 4, 2, 0};
    int n = 6;
    PrintArray(a, n);
    SelectionSort(a, n);
    PrintArray(a, n);
    return 0;
}
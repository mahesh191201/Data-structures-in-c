#include<stdio.h>

int binarysearch(int arr[], int n, int element){

int low=0, high=n-1, mid=0;


while (low<=high)
{
    mid=(low+high)/2;

    if (arr[mid]==element)
    {
        return mid;
    }
     if (arr[mid]<element)
    {
        low=mid+1;
    }
    else{
        high=mid-1;
    } 
}
     return -1;
}

int main()
{
 
 int arr[20];

 int n, element;
 printf("enter the size\n");
 scanf("%d", &n);

 printf("enter a sorted array\n");
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("enter the element u want to search\n");
   scanf("%d", &element);

 int searchindex= binarysearch(arr, n, element);

printf("The search index is %d for element %d", searchindex, element);

 return 0;
}



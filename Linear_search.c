#include<stdio.h>
int main()
{

    int arr[10];
    int i, size, element, found=0;
    printf("enter the size\n");
    scanf("%d", &size);
   
   printf("enter the array\n");
   for ( i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   
   printf("enter the element\n");
    scanf("%d", &element);
  
  for ( i = 0; i < size; i++)
  {
     if(arr[i]==element)
     {
       printf("The element is at index: %d", i);
       found=1;
     }
  }
  if (found==0)
  {
   printf("element not found");
  }
  

     return 0; 
         
}




/* Heap crux
   
   If a node is it index, it is called as 'i'
   node or root left child: 2*i
   node or root right child: 2*i+1
   node or root parent: |i/2|
   */
#include <stdio.h>
#define MAX_SIZE 15
int parent(int i)
{
   return (i -1) / 2;
}

int left_child(int i){
   return 2*i;
}

int right_child(int i){
   return 2*i+1;
}
int main()
{
   printf("%d", parent(4));

   return 0;
}

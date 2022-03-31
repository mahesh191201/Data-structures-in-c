 
#include<stdio.h>
#include<stdlib.h>

    struct node
    {
        int data;
    struct node*next;
        
    };

void Traversal(struct node* head)
    {
          while(head!= NULL){
              printf("%d\n", head->data);
              head=head->next;
          }

    }

int main()

{   struct node*head;
    struct node*second;
    struct node*third;

   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));

   head->data =4;
   head->next=second;

   second->data =9;
   second->next=third;

   third->data=16;
   third->next=NULL;

Traversal(head);


   return 0;




 }
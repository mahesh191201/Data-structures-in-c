#include<stdio.h>
#include<stdlib.h>

    struct node
    {
        int data;
    struct node*next;
        
    };

void Traversal(struct node* ptr)
    {
          while(ptr!= NULL){
              printf("%d\n", ptr->data);
              ptr=ptr->next;
          }

    }

    struct node* deletehead(struct node*head )
    {
       
       struct node*ptr =head;
       head=head->next;
         free(ptr);
         return head;
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
printf("\n");

head=deletehead(head);
Traversal(head);


   return 0;

 }
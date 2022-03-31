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

    struct node* deleteatindex(struct node*head, int index )
    {
       
    struct node*p =head;
    struct node*q =head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
       p->next=q->next;
       free(q);
       return head;
    
    }

int main()

{   struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

   head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
   fourth=(struct node*)malloc(sizeof(struct node));

   head->data =4;
   head->next=second;

   second->data =9;
   second->next=third;

   third->data=16;
   third->next=fourth;

   fourth->data=25;
   fourth->next=NULL;

Traversal(head);
printf("\n");

head=deleteatindex(head, 3);
Traversal(head);


   return 0;

 }
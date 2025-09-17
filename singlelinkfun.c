#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

 node* create(int n)
{
    int i;
    node *head,*temp,*p;
    head=(node*)malloc(sizeof(node));
    printf("\nEnter data of head node : ");
    scanf("%d",&head->data);
    head->next=NULL;
    p=head;

    for(i=1;i<n;i++)
        {
            temp=(node*)malloc(sizeof(node));
            printf("\nEnter data : ");
            scanf("%d",&temp->data);
            temp->next=NULL;
            p->next=temp;
            p=p->next;
        }
    return head;
}

void print(node*head)
{
    node *p;
    p=head;
    while(p!=NULL)
        {
            printf("%d-->",p->data);
            p=p->next;
        }
    printf("NULL");
}

int main()
{
    int n;
    node *head;

    printf("\nEnter how many nodes : ");
    scanf("%d",&n);

    head=create(n);

    print(head);

    return 0;
}

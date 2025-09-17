#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

}node;

int main()
{
    node *p,*temp,*head;
    int n,i;

    printf("\n Enter how many nodes : ");
    scanf("%d",&n);

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
    p=head;
    while(p!=NULL)
        {
            printf("%d-->",p->data);
            p=p->next;
        }
    printf("NULL");

    return 0;
}
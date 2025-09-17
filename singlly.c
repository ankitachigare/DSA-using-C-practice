#include<stdlib.h>
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;

}node;

node* createnode(int n)
{
    node *head,*temp,*p;
    int i;

    head=(node*)malloc(sizeof(node));
    printf("\nEnetr data of head node : ");
    scanf("%d",&head->data);
    head->next=NULL;

    p = head;
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
void print(node *head)
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
int oddnumbers(node *head)
{
    node *p;
    int cnt=0;

    for(p=head;p!=NULL;p=p->next)
        {
            if(p->data % 2 != 0)
                    cnt++;
                
        }
    return cnt;
}

int sum(node *head)
{
    node *p;
    int sum = 0;
    for(p=head;p!=NULL;p=p->next)
        {
            sum = sum + p->data;
        }
    return sum;
}

int max(node *head)
{
    node *p;
    int max;
    if(head == NULL)
        return -69;

    p=head;
    max=p->data;
    while(p!=NULL)
        {
            if(p->data > max)
                max=p->data;
            p=p->next;
        }
    return max;
}
int main()
{
    node *head=NULL;
    int n,choice,ans;

    printf("\nEnetr how many nodes : ");
    scanf("%d",&n);

    head = createnode(n);

    do
    {
        printf("\n1:print the linkedlist ");
        printf("\n2:Find the odd numbers ");
        printf("\n3:Find the maximun number out of linkedlist");
        printf("\n4:Find the sum of the linkedlist ");
        printf("\n5:Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:print(head);
                   break;

            case 2:ans=oddnumbers(head);
                   printf("\nNumber of odd numbers are %d",ans); 
                   break;

            case 3:ans=max(head);
                    if(ans == -69)
                        printf("\nLinkedlist does not exist");
                    else
                        printf("\nMaximum numbers is %d",ans);
                   break;

            case 4:ans=sum(head);
                   printf("\nSum of the numbers of linkedlist is %d",ans); 
                   break;
        }

    }while(choice!=5);


    return 0;

}
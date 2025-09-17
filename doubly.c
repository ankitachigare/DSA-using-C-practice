#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *pre;
}node;

node* create(int n)
{
    node *p,*temp,*head;
    int i;

    head = (node*)malloc(sizeof(node));
    printf("\nEnter data of head node : ");
    scanf("%d",&head->data);
    head->next=NULL;
    head->pre=NULL;

    p=head;
    for(i=1;i<n;i++)
    {
        temp=(node*)malloc(sizeof(node));
        printf("\nEnter data : ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->pre=NULL;
        p->next=temp;
        temp->pre=p;
        p=p->next;
    }
    return head;
}

void print(node *head)
{
    node *p;

    p=head;
    printf("\nNULL<--");
    while(p->next!=NULL)
        {
            printf("%d<-->",p->data);
            p=p->next;
        }
    printf("%d-->",p->data);
    printf("NULL");
}

int count(node *head)
{
    node *p;
    int cnt=-1;

    p=head;

    while(p!=NULL)
        {
            cnt++;
            p=p->next;
        }
    return cnt;
}

int sum(node *head)
{
    node *p;
    int sum=0;

    p=head;
    while(p!=NULL)
        {
            sum = sum + p->data;
            p=p->next;
        }
     return sum;
}
int main()
{
    node *head=NULL;
    int n,ch,cnt,ans;

    do 
      {
        printf("\n1: create a doubly linked list.");
        printf("\n2: print the doubly linked list.");
        printf("\n3: count number of nodes in doubly linked list.");
        printf("\n4:Sum of linked list.");
        printf("\n5: exit.");

        printf("\n Enter your choice : ");
        scanf("%d",&ch);

        switch(ch)
            {
                case 1:printf("\nEnter number of nodes : ");
                       scanf("%d",&n);
                       if(n==0 || n<0)
                            printf("\nEnter valid number.");
                        else
                            {
                                head = create(n); 
                                printf("\nlinked list created successfully.");
                            } 
                    break;

                case 2:print(head);
                    break;

                case 3:cnt = count(head);
                       if(cnt==-1)
                            printf("\nLinked list is empty.");
                        else
                            printf("\nThere are %d number of nodes in linked list .",cnt);
                    break;

                case 4:ans=sum(head);
                       printf("\nSum of number of linked list is %d",ans);
                    break;   


            }

      }while(ch!=5);
    return 0;
}
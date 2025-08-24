#include<stdio.h>
#include<stdlib.h>
void readnumber(int n[],int no)
{
    printf("\n Enter %d numbers: ",no);
    int i;
    for(i=0;i<no;i++)
        {
            n[i] = rand()%100;
        }
}

void printnumbers(int n[],int no)
{
    int i;
    printf("\nNumbers are as follows : ");
    for(i=0;i<no;i++)
        {
            printf("\n %d",n[i]);
        }
}

int searchnumber(int n[],int no,int x)
{
    int loc=-1;
    int i;
    for(i=0;i<no;i++)
        {
            if(n[i]==x)
                {
                    loc=i;
                    break;
                }
        }
    return loc;
}


int main()
{
    int n[100],no,x,loc;

    printf("\n Enter how many numbers: ");
    scanf("%d",&no);

    readnumber(n,no);
    printnumbers(n,no);

    printf("\n Enter number to be searched: ");
    scanf("%d",&x);

    loc=searchnumber(n,no,x);

    if(loc==-1)
        printf("\n %d number not found",x);
    else
        printf("\n %d number found at %d location",x,loc);
     
     return 0;
}

#include<stdio.h>

void readarray(int a[],int n)
{
    int i;
    printf("\nEnter numbers : ");
    for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
}

 void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            printf("\n %d",a[i]);
        }
}

void insertionsort(int a[],int n)
{
    int i,j,cmpcnt=0;
    int t;
    for(i=1;i<n;i++)
        {
            t=a[i];
            for(j=i-1;j>=0;j--)
                {
                    cmpcnt++;
                    if(a[j]>t)
                        a[j+1]=a[j];
                    else
                        break;
                }
            a[j+1]=t;
        }
}
int main()
{
    int n,a[100];

    printf("\nEnter how many numbers : ");
    scanf("%d",&n);

    readarray(a,n);

    printf("\nBefore sorting numbers are as follows");
    printarray(a,n);

    insertionsort(a,n);

    printf("\n Numbers after sorting with insertio sort : ");
    printarray(a,n);

    return 0;
}
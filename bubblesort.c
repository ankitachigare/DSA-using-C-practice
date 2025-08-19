#include<stdio.h>
void readnumbers(int a[],int no)
{   
    int i;
    printf("\nEnter numbers: ");
    for(i=0;i<no;i++)
        {
            scanf("%d",&a[i]);
        }
}
void printnumbers(int a[],int no)
{
    int i;
    printf("\n Numbers are as follows: ");
    for(i=0;i<no;i++)
        {
            printf("\n%d",a[i]);
        }
}

void bubblesort(int a[],int no)
{
    int i,j,swpcnt=0,cmpcnt=0,flag;
    int t;
    for(i=1;i<no;i++)
        {
            flag=0;
            for(j=0;j<no-i;j++)
            {
                cmpcnt++;
                if(a[j]>a[j+1])
                    {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                        swpcnt++;
                        flag=1;
                    }
                    
            }
            if(flag==0)
            break;
        }
        printf("\nNumber of comparisons:%d",cmpcnt);
        printf("\nNumber of swapping:%d",swpcnt);

}
int main()
{
    int a[100],no;

    printf("\n Enter how many numberas : ");
    scanf("%d",&no);

    readnumbers(a,no);

    printf("\n Before swapping");
    printnumbers(a,no);

    bubblesort(a,no);

    printf("\n After swapping: ");
    printnumbers(a,no);
    
    return 0;
}
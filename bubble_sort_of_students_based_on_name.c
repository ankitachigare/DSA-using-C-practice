#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll_no;
    char name[30];
    float score;

}std;
void readstudent(std s[],int no)
{
    int i;
    printf("\nEnter %d number of student's details : ",no);
    for(i=0;i<no;i++)
        {
            printf("\n Enter roll number: ");
            scanf("%d",&s[i].roll_no);
            printf("\n Enter name of student : ");
            scanf("%s",&s[i].name);
            printf("\n Enter marks : ");
            scanf("%f",&s[i].score);

        }
}
void printstudent(std s[],int no)
{
    int i;
    printf("\n ROLL_NO NAME   MARKS");
    for(i=0;i<no;i++)
        {
            printf("\n%d \t%s \t%f",s[i].roll_no,s[i].name,s[i].score);
        }
}
void bubblesort(std s[],int no)
{
    int i,j,swpcnt=0,cmpcnt=0;
    std t;
    for(i=1;i<no;i++)
        {
            for(j=0;j<no-i;j++)
            {
                cmpcnt++;
                if(strcmp(s[j].name,s[j+1].name)>0)
                    {
                        t=s[j];
                        s[j]=s[j+1];
                        s[j+1]=t;
                        swpcnt++;
                    }
            }
        }
        printf("\nNumber of comparisons : %d",cmpcnt);
        printf("\nNumber of swappings : %d",swpcnt);

}

int main()
{
    int no;
    std s[100];

    printf("\n Enter how many number of students : ");
    scanf("%d",&no);

    readstudent(s,no);

    printf("\n Data of student before sorting : ");
    printstudent(s,no);

    bubblesort(s,no);

    printf("\nData of students after sorting : ");
    printstudent(s,no);

    return 0;
}
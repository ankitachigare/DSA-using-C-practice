#include<stdio.h>
typedef struct stud
{
    char sname[30];
    int roll_no;
    float sscore;

}stud;

void readstud(stud s[],int no)
{
    int i;
    for(i=0;i<no;i++)
        {
            printf("\nEnter student name : ");
            scanf("%s",&s[i].sname);

            printf("\nEnter roll number : ");
            scanf("%d",&s[i].roll_no);

            printf("\nEnter score : ");
            scanf("%f",&s[i].sscore);
        }
}

void printstud(stud s[],int no)
{
    printf("\nNAME   ROLL_NO   SCORE");
    int i;
    for(i=0;i<no;i++)
        {
            printf("\n%s",s[i].sname);
            printf("\n%d",s[i].roll_no);
            printf("\n%f",s[i].sscore);
        }
}
int searchstud(stud s[],int no,int x)
{
    int loc=-1;
    int i;
    for(i=0;i<no;i++)
        {
            if(s[i].roll_no==x)
                {
                    loc=i;
                    break;
                }
        }

    return loc;
}

int main()
{
    stud s[100];
    int no,x,loc;

    printf("\n Enter how many number of students: ");
    scanf("%d",&no);

    readstud(s,no);
    printstud(s,no);

    printf("\n Enter roll number to be searched : ");
    scanf("%d",&x);

    loc=searchstud(s,no,x);

    if(loc==-1)
        printf("\n Student belonging to the %d roll number not found",x);
    else
        {
            printf("\n student name : %s",s[loc].sname);
            printf("\nroll number : %d",s[loc].roll_no);
            printf("\n marks obtained : %f",s[loc].sscore);
        }

    return 0;

}
#include<stdio.h>
typedef struct student
{
    char name[30];
    int roll_no;
    float marks;
}std;

int readstudents(std s[])
{
    int i,n;
    FILE*fp;
    fp = fopen("student.txt","r");
    i=0;
    i=n;
    while(!feof(fp))
        {
        fscanf(fp,"%s %d %f\n",&s[i].name,&s[i].roll_no,&s[i].marks);
        i++;
        n++;
        }
    return n;
}
void printstudents(std s[], int n)
{
    int i;
    printf("\n NAME   ROLL_NO  MARKS\n");
    for(i=0;i<n;i++)
        {
            printf("%s %d %f\n",s[i].name,s[i].roll_no,s[i].marks);
        }
}
void bubblesort(std s[],int n)
{
    int i,j,swpcnt=0,cmpcnt=0;
    std t;
    for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
                {
                    cmpcnt++;
                    if(s[j].marks>s[j+1].marks)
                        {
                            t=s[j];
                            s[j]=s[j+1];
                            s[j+1]=t;
                            swpcnt++;
                        }
                }
        }
        printf("\nNumber of comparisons : %d",cmpcnt);
        printf("\n Number of swappings : %d",swpcnt);
}


int main()
{
    int n;
    std s[30];

    n = readstudents(s);

    printf("\n Details of %d number of students before sorting are as follows : ",n);
    printstudents(s,n);

    bubblesort(s,n);

    printf("\nStudent details after sorting by marks are as follows");
    printstudents(s,n);

    return 0;
}
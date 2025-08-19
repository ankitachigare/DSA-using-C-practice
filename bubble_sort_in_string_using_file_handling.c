#include<stdio.h>
typedef struct movie
{
    char name[30];
    int code;

}mov;

int readmovie(mov m[])
{
    int i,n;
    FILE * fp;
    fp = fopen("movie.txt","r");
    i=0;
    n=0;
    while(!feof(fp))
        {
        fscanf(fp,"%s %d\n",&m[i].name,&m[i].code);
        i++;
        n++;
        }
    fclose(fp);
    return n;
}

void printmovie(mov m[],int n)
{
    int i;
    FILE *fp;
    fp = fopen("output.txt","w");
    for(i=0;i<n;i++)
        {
            fprintf(fp,"%s %d\n",m[i].name,m[i].code);
        }
        fclose(fp);
}

void bubblesort(mov m[],int n)
{
    int i,j,cmpcnt=0,swpcnt=0;
    mov t;
    for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
                {
                    cmpcnt++;
                    if(m[j].code>m[j+1].code)
                        {
                            t=m[j];
                            m[j]=m[j+1];
                            m[j+1]=t;
                            swpcnt++;

                        }
                }
        }
        printf("\n Number of comparisons  : %d ",cmpcnt);
        printf("\n Number of swappings : %d",swpcnt);
}

int main()
{
    int n;
    mov m[30];

    n=readmovie(m);

    bubblesort(m,n);

    printmovie(m,n);

    return 0;
}
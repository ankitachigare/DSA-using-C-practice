#include<stdio.h>
#include<string.h>
typedef struct movie
{
    char mname[30];
    int mcode;
}movie;

int readmovie(movie m[])
{
    int i,n;
    FILE*fp;
    fp=fopen("movie.txt","r");
    i=0;
    n=0;
        while(!feof(fp))
            {
                fscanf(fp,"%s %d",&m[i].mname,&m[i].mcode);
                i++;
                n++;
            }
    fclose(fp);
    return n;
            
}

void printmovie(movie m[],int n)
{
    int i;
    printf("\nName Code");
    for(i=0;i<n;i++)
        {
            printf("\n%s %d",m[i].mname,m[i].mcode);
        }
}

int searchmovie(movie m[],int n,char s[])
{
    int i,loc;
    loc=-1;
    for(i=0;i<n;i++)
        {
            if(strcmp(s,m[i].mname)==0)
                {
                    loc=i;
                    break;

                }
        }
    return loc;
}

int main()
{
    movie m[100];
    int n,loc;
    char s[100];


    n=readmovie(m);
    printmovie(m,n);

    printf("\n Enter movie name to be searched:");
    scanf("%s",&s);

    loc=searchmovie(m,n,s);

    if(loc==-1)
        printf("\n %s Movie not found",s);
    else
        {
            printf("movie name: %s",m[loc].mname);
            printf("\nmovei code: %d",m[loc].mcode);

        }

    return 0;
}

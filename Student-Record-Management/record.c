#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define Student struct Stud

void add(FILE * fp);
void modify(FILE * fp);
void display(FILE * fp);

struct Stud
{
    char name[100];
    char dept[50];
    int roll;
    float sgpa[12];
    float cgpa;
};

int main()
{
    int ch, id, k, i;
    char c, add, pas[50];
    FILE * fp;
    Student s;
    int option;
    char another;

    if((fp=fopen("db.txt","rb+"))==NULL)
    {
        if((fp=fopen("db.txt","wb+"))==NULL)
        {
            printf("Can't create or open Database.");
            return 0;
        }
    }

    printf("\n\n\n\t\t\t       press any key to Enter");
    getch();

    while (1)
    {
        title();
        printf("\n\t");
        printChar('*', 64);

        printf("\n\n\t\t\t\t1. Add Student");
        printf("\n\n\t\t\t\t2. Modify Student");
        printf("\n\n\t\t\t\t3. Show All Student");
        printf("\n\n\t\t\t\t4. Remove Student");

        printChar('*', 64);
        printf("\n\n\t\t\t\tEnter Your Option :--> ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addit(fp);
            break;
        case 2:
            modify(fp);
            break;
        case 3:
            display(fp);
            break;
        case 4:
            fp=del(fp);
            break;
        }
    }
}
// void printChar(char ch,int n)
// {
//     while(n--)
//     {
//         putchar(ch);
//     }
// }

void add(FILE * fp)
{
    title();

    char another='y';
    Student s;
    int i;
    float cgpa;

    fseek(fp,0,SEEK_END);
    while(another=='y'||another=='Y')
    {

int cgpa;
        printf("\n\n\t\tEnter Full Name of Student: ");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';

        printf("\n\n\t\tEnter Depertment Name: ");
        fflush(stdin);
        fgets(s.dept,50,stdin);
        s.dept[strlen(s.dept)-1]='\0';

        printf("\n\n\t\tEnter Roll number: ");
        scanf("%d",&s.roll);

        printf("\n\n\tEnter SGPA for 12 semesters\n");
        scanf("%f",&s.sgpa[i]);
            cgpa+=s.sgpa[i];

    }

}

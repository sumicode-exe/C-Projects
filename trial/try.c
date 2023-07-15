// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char monday[40] = {'m', 'o', 'n', 'd', 'a', 'y', '\0'};
//     char tuesday[40] = {'t', 'u', 'e', 's', 'd', 'a', 'y', '\0'};
//     char wednesday[40] = {'w', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y', '\0'};
//     char thursday[40] = {'t', 'h', 'u', 'r', 's', 'd', 'a', 'y', '\0'};
//     char saturday[40] = {'s', 'a', 't', 'u', 'r', 'd', 'a', 'y', '\0'};
//     char sunday[40] = {'s', 'u', 'n', 'd', 'a', 'y', '\0'};
//     char friday[40] = {'f', 'r', 'i', 'd', 'a', 'y', '\0'};

//     char whatDay[40];
//     fgets(whatDay, 40, stdin);
//     puts(whatDay);

//     // if(strcmp(whatDay, monday) == 0){
//     //     printf("Monday");
//     // }
// }

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // declaration
    char str[100];
    char ch;
    int i = 0;

    char monday[40] = {'m', 'o', 'n', 'd', 'a', 'y', '\0'};
    char tuesday[40] = {'t', 'u', 'e', 's', 'd', 'a', 'y', '\0'};
    char wednesday[40] = {'w', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y', '\0'};
    char thursday[40] = {'t', 'h', 'u', 'r', 's', 'd', 'a', 'y', '\0'};
    char saturday[40] = {'s', 'a', 't', 'u', 'r', 'd', 'a', 'y', '\0'};
    char sunday[40] = {'s', 'u', 'n', 'd', 'a', 'y', '\0'};
    char friday[40] = {'f', 'r', 'i', 'd', 'a', 'y', '\0'};

    // gets() & puts()
    char fullName[40];
    printf("Enter full name : ");
    fgets(fullName, 40, stdin);
    puts(fullName);
    printf("After reversing string is =%s \n", strrev(fullName));

    if((strcmp(fullName, monday) != 0) || (strcmp(fullName, tuesday) != 0) || (strcmp(fullName, wednesday) != 0) ||(strcmp(fullName, thursday) != 0) ||(strcmp(fullName, friday) != 0) ||(strcmp(fullName, saturday) != 0)){
        printf("Sunday \n");
    } else {
        printf("no \n");
    }

    if((strcmp(fullName, sunday) == -1)){
        printf("Sundyyyy \n");
    } else {
        printf("EEEGGGHHH wrong md");
    }
}
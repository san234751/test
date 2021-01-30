#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
    int check;
    char* dirname="LAB1A";
    check=mkdir(dirname);
    if(!check)
    {
        printf("dirctory created");
    }
    else
    {
        printf("unable to create directory");
        exit(1);
    }
    getch();
    system("dir");
    getch();

    return 0;
}
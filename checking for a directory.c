#include<stdio.h>
#include<dirent.h>
#include<errno.h>

int main()
{
    DIR* f;
    f=cd("LAB2");
    if(f)
    {
        printf("directory exist");
        rmdir(f);
    }
    else if(ENOENT==errno)
    {
        printf("directory does not exist");
    }
    return 0;
}
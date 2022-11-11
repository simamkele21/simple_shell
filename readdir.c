#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char **argv[])
{
    DIR *dir;
    struct dirent *ad;

    dir = opendir(",");

    if (dir == NULL)
    {
        printf("Error: Cannot open directory.\n");
        exit(1);
    }

    while ( (sd=readdir(dir)) != NULL)
    {
        printf("%s\n", sd->d_name);
    }

    closedir(dir);

    return 0;
}
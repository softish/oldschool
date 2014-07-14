//
//#include "includes.h"
#include <stdio.h>
#include <stdlib.h>
//#include "mathy.h"

//void create_file(char filename[]); /// rename write_to_file + branch = filehandler
int consequtive_sum(int start, int stop);

int main(void)
{
    char opt = 0;
    int a = 0, res = 0;

    printf("1 for file, 2 for mathy stuff\n");
    opt = getchar();
    a = atoi(&opt);
    printf("A: %d\n", a);

    if(opt == 1)
    {
        create_file("filename");
    }
    else if(a == 2)
    {
        res = consequtive_sum(1,100);
        printf("Conscutive sum %d\n", res);
    }

	return 0;
}

int consequtive_sum(int start, int stop)
{
    int i = 0, sum = 0;

    for(i = start; i < stop + 1; i++)   // how to make thisone look good? <=??
    {
        sum += i;
    }

    return sum;
}

void create_file(char filename[])
{
    FILE* fp;
    int i, j;

    if((fp = fopen(filename, "w")) == NULL)
        perror("open_file");

    for(i = 0, j = 0; i < 20; i++, j++)
    {
        //if(j % 10 == 0)
        fprintf(fp, "\n");  // trying to get newline
        fprintf(fp, "%d", '\x0a');

        fprintf(fp, "%d", 4);
    }
}

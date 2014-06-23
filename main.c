//
#include "includes.h"

void create_file(char filename[]); /// rename write_to_file + branch = filehandler

int main(void)
{
    create_file("filename");

	return 0;
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

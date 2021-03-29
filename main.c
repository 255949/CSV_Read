#include "header.h"
#include <stdio.h>

int main()
{
    info info1;
    char line[100];
    FILE* fptr=NULL;
    char* token;
    if(open("data.csv","r",fptr)==SUCCESS)
    {
        while(fgets(line,50,fptr)!=NULL)
        {
            token=strtok(line,",");
            store_data(&info1.name,token);
            printf("Name : %s\n",info1.name);

            token=strtok(NULL,",");
            store_data(&info1.email,token);
            printf("Email ID : %s\n",info1.email);

            token=strtok(NULL,",");
            store_data(&info1.git,token);
            printf("Github Profile : %s\n",info1.git);

        }
    }
    else
    {
        printf("File not found/Unable to open file");
    }

}
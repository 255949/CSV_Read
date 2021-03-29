#include "header.h";
#include <stdio.h>;

/**
 * @brief Check file availability
 * 
 * @param filename Name of File
 * @param type Specify read or write, etc.
 * @param fptr File pointer
 * @return error_t 
 */
error_t open(char *filename,char *type, FILE **fptr)
{
    *fptr=fopen(filename,type);
    if(fptr==NULL)
        return READ_ERROR;
    else
        return SUCCESS;
}

void store_data(char **data,char * token)
{
    *data=malloc(strlen(data)+1);
    strcpy(*data,token);
}


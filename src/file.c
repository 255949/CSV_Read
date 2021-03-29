#include "header.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

/**
 * @brief File for allocation of memory based on size of token
 * 
 * @param data Info structure data (name,email and git)
 * @param token Tokenized data from line by using ',' delimiter
 */
void store_data(char **data,char * token)
{
    *data=(char*)malloc(strlen(token)+1);
    strcpy(*data,token);
}


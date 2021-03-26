/**
 * @file header.h
 * @author Ayushman
 * @brief Header file for reading values from csv file
 * @version 0.1
 * @date 2021-03-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__

/**
 * @brief Structure with data from csv file
 * 
 */
typedef struct info
{
    char *name;
    char *email;
    char* git;
}info;

typedef enum error_t
{
    READ_ERROR=-1,
    SUCCESS=0
}error_t;

?
/**
 * @brief  Function to read a line from csv file
 * 
 * @param fptr File pointer
 * @param data String for storing line of data
 * @return int 
 */
int read_line(FILE ** fptr,char* data);

/**
 * @brief File for allocation of memory based on size of token
 * 
 * @param data Info structure data (name,email and git)
 * @param token Tokenized data from line by using ',' delimiter
 */
void store_data(char **data,char * token);

#endif

#include <stdio.h>
#include <string.h>

#define MAXIMUM_TASKS 100     // maximum number of tasks 
#define MAXIMUM_DESCLEN 100   // maximum description length
#define MAXIMUM_CATLEN 30     // maximun category length

typedef struct {
    char description[MAX_DESC_LENGTH];  
    char category[MAX_CAT_LENGTH];     
    int completed               
} Task;
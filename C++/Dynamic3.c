#include<stdio.h>
#include<stdlib.h> // for malloc calloc realloc & free

int main()
{

    int *ptr= NULL;

    ptr= (int *)malloc(5*sizeof(int)); //int * type casting...
    
    ptr = (int *)recalloc(ptr, 10 * sizeof(int));

    free(ptr);
    return 0;
    
}
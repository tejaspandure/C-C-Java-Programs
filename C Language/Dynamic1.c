#include<stdio.h>
#include<stdlib.h> // for malloc calloc realloc & free

int main()
{
    int Arr[5]; //Static memroy allocation...
    int Size = 0;
    int *ptr= NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&Size);

    ptr= (int *)malloc(Size*sizeof(int)); //int * type casting...
    // =(int *) malloc(6*4);
    //=(int *)malloc (24);
    
    //Use the memory

    free(ptr);

    
    return 0;
}
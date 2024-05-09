#include<stdio.h>
#include<stdlib.h> // for malloc calloc realloc & free

int main()
{
    int Arr[5]; //Static memroy allocation...
    int Size = 0;
    int *ptr= NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&Size);

    ptr= (int *)calloc(Size,sizeof(int)); //int * type casting...
    // =(int *) calloc(12 pishvya* 500ml);
    //=(int *)malloc (6000ml);
    
    //Use the memory

    free(ptr);

    
    return 0;
}
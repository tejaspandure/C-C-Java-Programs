#include<stdio.h>
#include<stdlib.h> //malloc sathi vapraleli
#include<unistd.h> // universal standard .h 
#include<fcntl.h>  // file control .

int main()
{   
    char cName [30];
    int ifd = 0; //file descriptor giving number...

    printf("Enter the name of file that you want to delete: \n");
    scanf("%s",cName);

    unlink(cName);

    
    return 0;
}
#include<stdio.h>
#include<stdlib.h> //malloc sathi vapraleli
#include<unistd.h> // universal standard .h 
#include<fcntl.h>  // file control .

int main()
{   
    char cName [30];
    int ifd = 0; //file descriptor giving number...

    printf("Enter the name of file that you want to create: \n");
    scanf("%s",cName);

    ifd = creat(cName,0777);
    if(ifd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File getes created with FD %d\n",ifd);
    }

    return 0;
}
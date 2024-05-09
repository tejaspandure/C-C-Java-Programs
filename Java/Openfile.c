#include<stdio.h>
#include<stdlib.h> //malloc sathi vapraleli
#include<unistd.h> // universal standard .h 
#include<fcntl.h>  // file control .

// o_RDONLY     Read mode
// O_WRONLY     Write mode
// O_RDWR       Read + Write mode

int main()
{   
    char cName [30];
    int ifd = 0; //file descriptor giving number...

    printf("Enter the name of file that you want to open: \n");
    scanf("%s",cName);

    ifd = open(cName,O_RDWR);
    if(ifd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File getes opended with FD %d\n",ifd);
    }

    close(ifd);
    return 0;
}
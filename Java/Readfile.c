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
    int iRet = 0;
    char cData[30] = {'\0'}; 

    printf("Enter the name of file that you want to open: \n");
    scanf("%s",cName);

    ifd = open(cName, O_RDWR);
    //            kashat, kay, kiti
    iRet = read(ifd, cData,10);

    printf("%d bytes gets successfully read from  the file\n",iRet);

    printf("%s\n",cData);
    close(ifd);
    return 0;
}
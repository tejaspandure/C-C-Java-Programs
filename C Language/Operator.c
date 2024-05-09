#include <stdio.h>
int main()
{
    int No = 10;
    printf("Value of no: %d\n",No);
    printf("Address of no: %lu\n",&No);
    printf("Size of no: %d\n",sizeof(No));

    No++;
    printf("Value of no: %d\n",No);

    No--;
    printf("value of No:%d\n",No);
    return 0;
}
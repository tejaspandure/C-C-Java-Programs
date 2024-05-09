#include<stdio.h>
int main()
{
    int a=11;                    
    char ch='A';                  
    float f=90.89;
    double d = 90.34543;

    int Arr[5];         
    double Brr[5];
    float Crr[5];
    char Drr[5];

    printf("%lu\n",sizeof(a));
    printf("%lu\n",sizeof(ch)); //lu long unsigned: formate specifier
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));

    printf("%lu\n",sizeof(Arr));
    printf("%lu\n",sizeof(Brr));
    printf("%lu\n",sizeof(Crr));
    printf("%lu\n",sizeof(Drr));
    
    return 0;
}


// gcc sizeof.c -o Myexe
// Myexe.exe
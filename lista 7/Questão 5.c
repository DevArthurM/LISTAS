#include <stdio.h>
int main()
{
    int divisor = 1;
    long pi = 0;
    for (int cont = 1; cont <= 1000; cont++)
    {
        if(cont % 2 == 0)
        {
            pi += (long)4/divisor;
            printf("|. 4/%d \n|. +\n",divisor);
            divisor+=2;
        }else
        {
            pi -= (long)4/divisor;
            printf("|. 4/%d \n|. -\n",divisor);
            divisor+=2;
        }
    }
    printf("Pi vale %ld",pi);
    return 0;
}
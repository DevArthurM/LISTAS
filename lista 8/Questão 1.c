#include <stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        num[i] = i - 2;
        printf("|- %d\n",num[i]);
    }
    return 0;
}
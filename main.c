#include<stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 100; i++)
    {
        if(i == 90)
        {
            break;
        }

        if(i % 5 == 0)
        {
            continue;
        }

        if(i % 2 == 0 && i % 7 == 0)
        {
            printf("Super\n");
        }
        else if(i % 2 == 0)
        {
            printf("Even\n");
        }
        else if(i % 7 == 0)
        {
            printf("Seven\n");
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

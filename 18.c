#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, ary[8];
    for (int i = 0; i < 8; i++)
    {
        ary[i] = 0;
    }
    scanf("%d", &a);
    if (a >= 0)
    {
        for (int i = 7; i > -1; i--)
        {
            int b = 1;
            for (int j = 0; j < i; j++)
            {
                b *= 2;
            }
            if (a / b)
            {
                ary[i] = 1;
                a -= b;
            }
        }
    }
    else if (a < 0)
    {
        a = -a;
        for (int i = 7; i > -1; i--)
        {
            int b = 1;
            for (int j = 0; j < i; j++)
            {
                b *= 2;
            }
            if (a / b)
            {
                ary[i] = 1;
                a -= b;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (ary[i] == 0)
            {
                ary[i] = 1;
            }
            else
            {
                ary[i] = 0;
            }
        }
        if (ary[0] == 1)
        {
            ary[0] = 0;
            for (int i = 1; i < 8; i++)
            {
                if (ary[i] == 1)
                {
                    ary[i] = 0;
                }
                else
                {
                    ary[i] = 1;
                    break;
                }
            }
        }
        else{
            ary[0]=1;
        }
    }
    for (int i = 7; i > -1; i--)
    {
        printf("%d", ary[i]);
    }
    putchar('\n');
}
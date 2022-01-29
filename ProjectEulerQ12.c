#include <stdio.h>
#include <math.h>
#define NUMDIVISORS 500

int main(void)
{
    int curDivisors = 0;
    int curNum;
    int i = 1;

    while (curDivisors < NUMDIVISORS)
    {
        curNum = 0;
        curDivisors = 0;
        for (int j = 0; j < i; j++)
        {
            curNum += j;
        }
        for (int j = 1; j < sqrt(curNum); j++)
        {
            if (curNum % j == 0)
            {
                curDivisors += 2;
            }
        }
        i++;
    }

    printf("%d\n", curNum);

    return 0;
}
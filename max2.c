#include <stdio.h>

int main()
{
    int i,j,k;
    int sum1,sum2,sum3;

    scanf("%d%d%d",&i,&j,&k);
    sum1 = i + j;
    sum2 = i + k;
    sum3 = j + k;
    if (sum1 >= sum2 && sum1 >= sum3)
    {
        printf("%d\n", sum1);
        return (0);
    }
    else if (sum2 >= sum1 && sum2 >= sum3)
    {
        printf("%d\n", sum2);
        return (0);
    }
    else
    {
        printf("%d\n", sum3);
        return (0);
    }
}
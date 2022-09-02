#include <stdio.h>

int main()
{
    int num[3];
    int tmp;

    for(int i = 0;i < 3;i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0;i < 3;i++)
    {
        for(int j = i;j < 3;j++)
        {
            if (num[j] < num[i])
            {
                tmp = num[j];
                num[j] = num[i];
                num[i] = tmp;
            }
        }
    }
    printf("%d\n", num[1] + num[2]);
}
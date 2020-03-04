#include <stdio.h>
int main()
{
    // Write your code here
    int n, i;
    scanf("%d", &n);
    int a[n];
    int start, end, min = 0, minPos = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
        {
            min = a[i];
            minPos = i;
        }
        else
        {
            if (a[i] < a[i - 1])
            {
                min = a[i];
                minPos = i;
            }
        }
    }
    start = minPos;
    end = start == 0 ? n - 1 : start - 1;
    int key;
    scanf("%d", &key);
    i = start;
    //     printf("%d,%d\n",a[i],key);
    while (a[i] <= key)
    {
        //         printf("[%d][i:%d]\n",a[i],i);
        if (a[i] == key)
        {
            printf("%d\n", i);
            return 0;
        }
        i = (i + 1) % n;
    }
    printf("-1\n");
    return 0;
}
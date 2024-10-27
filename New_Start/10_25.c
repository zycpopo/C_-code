/*#include<stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            printf("%d ", i);
    }
    return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS

/*#include<stdio.h>
int main()
{
    int arr[3] = { 0 };
    int t = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 2 - j; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int max = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d", max);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    double sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += (1.0 / i);
    }
    printf("%lf", sum);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i == 9) count++;
        else if (i % 10 == 9)
            count++;
        else if (i / 10 == 9)
            count++;
    }
    printf("%d", count);
    return 0;
}*/

/*#include<stdio.h>
int leap_year(int x)
{
    if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
        return 1;
    else
        return 0;
}
int main()
{
    int count = 0;
    for (int i = 1000; i <= 2000; i++)
    {
        if (leap_year(i))
            count++;
    }
    printf("%ld", count);
    return 0;
}*/

#include<stdio.h>
int gcd(int x, int y)
{
    int i = 0;
    int min = (x < y) ? x:y;
    for (i = min; i >= 1; i--)
    {
        if ((x % i == 0) && (y % i == 0))
        {
            return i;
            break;
        }
    }
}
int main()
{
    int a = 0, b = 0;
    int common_divisor = 0;
    scanf("%d%d", &a, &b);
    common_divisor = gcd(a, b);
    printf("最大公约数是%d", common_divisor);
    return 0;
}
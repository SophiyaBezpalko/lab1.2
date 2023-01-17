#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
double func;
double x1;
double x2;
double delta;
double result;
unsigned int N;
unsigned int variant;

       printf("enter variant (1 or 2)");
       scanf("%d", &variant);
while (variant != 1 && variant != 2)
    {
        printf("read the instruction carefully");
        scanf("%d", &variant);
    }
if (variant == 1)
    {
        printf("\nenter x1: ");
        scanf("%lf", &x1);
        printf("\nenter x2: ");
        scanf("%lf", &x2);
        printf("\nselect N: ");
        scanf("%u", &N);
        printf("\n***********************");
        printf("\n*   N*   X*       F(X)*");
        printf("\n***********************");
        delta = (x2 - x1) / (N - 1);
for (int i = 1; i <= N; i++)
        {
        func = (0.25 * pow(x1, 5) + 4 * pow(x1 + 20, 4) - 2 * x1);
        printf("\n|%4d|%5.3lf|%5.3lf|", i, x1, func);
        x1 = x1 + delta;
            if (i % 10 == 0)
            {
            printf("\n press any key to continue");
            getch();
            }
        }
    }
if (variant == 2)
    {
        printf("\nenter x1: ");
        scanf("%lf", &x1);
        printf("\nenter x2: ");
        scanf("%lf", &x2);
        printf("\nenter delta:");
        scanf("%lf", &delta);
        printf("\n***********************");
        printf("\n*   N*   X*       F(X)*");
        printf("\n***********************");
int i = 1;
while (x1 <= x2)
        {
        func = (0.25 * pow(x1, 5) + 4 * pow(x1 + 20, 4) - 2 * x1);
        printf("\n|%4d|%5.3lf|%5.3lf|", i, x1, func);
        x1 = x1 + delta;
if (i % 10 == 0)
            {
        printf("\n press any key to continue");
        getch();
            }
        i++;
        }
    }
return 0;
}

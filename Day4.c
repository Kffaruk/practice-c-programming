#include <stdio.h>
int main()
{
    // Practice 1

    // int a,b,sum;
    // printf("Enter two number");
    // scanf("%d%d", &a,&b);
    // sum = a + b;
    // printf("Value is %d", sum);

    // Practice 2

    // int age, ageDay;
    // printf("Enter your age ");
    // scanf("%d", &age);
    // ageDay = age*365;
    // printf("you have lived %d days", ageDay);

    // Practice 3

    int mark;
    printf("Enter the mark");
    scanf("%d", &mark);
    if (33 <= mark)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail");
    }

    // Practice 4

    int value;

    printf("Enter a number: ");

    scanf("%d", &value);

    if (value % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }

    // Practice 5

    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    // //Practice 6

    int sum = 0;
    int n;
    printf("Enter a number: ");

    scanf("%d", &n);

    for (n = 1; 1 <= n; n++)
    {
        sum = sum + n;
    }

    // Practice 7

    int num1, num2, num3;
    int largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    largest = num1;

    if (num2 > largest)
    {
        largest = num2;
    }

    if (num3 > largest)
    {
        largest = num3;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}

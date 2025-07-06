#include <stdio.h>
int main()
{

    // problem 1

    int A, B, X;
    printf("Enter A and B value: \n");
    scanf("%d %d", &A, &B);
    X = A + B;
    printf("X = %d", X);

    // problem 2

    const float PI = 3.14159;
    float area, raduis;
    scanf("%f", &raduis);
    area = PI * raduis * raduis;
    printf("A=%.4lf\n", area);

    // problem 3

    int A, B, sum;
    scanf("%d %d", &A, &B);
    sum = A + B;
    printf("SOMA = %d", sum);

    // problem 4

    int A, B, result;
    scanf("%d %d", &A, &B);
    result = A * B;
    printf("PROD = %d\n", result);

    // problem 5

    float A, B, avg;
    scanf("%f %f", &A, &B);
    avg = (A * 3.5 + B * 7.5) / 11.0;
    printf("MEDIA = %.5f\n", avg);

    // problem 6

    double A, B, C, avg;
    scanf("%lf %lf %lf", &A, &B, &C);
    avg = (A * 2 + B * 3 + C * 5) / 10.0;
    printf("MEDIA = %.1lf\n", avg);

    // problem 7

    int A, B, C, D, result;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    result = (A * B - C * D);
    printf("DIFERENCA = %d\n", result);

    // problem 8

    int number, month;
    float salary;
    scanf("%d %d %f", &number, &month, &salary);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary * month);

    return 0;
}
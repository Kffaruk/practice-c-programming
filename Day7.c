#include <stdio.h>
int main()
{

    // problem 1

    char name[50];
    double salary,sales,com;

    scanf("%s %lf %lf", name, &salary, &sales);
    com = sales*0.15;
    printf("TOTAL = R$ %.2lf\n", com+salary);

    // problem 2

    int A,B,sum;
    scanf("%d %d", &A, &B);
    sum = A + B;
    printf("SOMA = %d\n", sum);

    // problem 3

    float radius,area;
    const float PI = 3.1416;
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("area = %.4f\n", area);

    // problem 4

    int A,B,result;
    scanf("%d %d", &A, &B);
    result = A*B;
    printf("PROD = %d\n", result);

    // problem 5

    float  marks,marks1,avg;
    scanf("%f %f", &marks, &marks1);
    avg =(marks+marks1)/2.0;
    printf("MEDIA = %.5f\n", avg);

    // problem 6

    int ID;
    float hour,salary,total;
    scanf("%d %f %f", &ID, &hour, &salary);
    total = hour*salary;

    // problem 7 
    
        int sum = 0;
        for(int i = 30; i <=  120; i++){
                 if(i % 3 == 0 && i % 5 == 0) {

            sum = sum + i;
        }

    }

    // problem 8

    int i = 2;
    while (i <= 100)
    {
        printf("%d\n", i);
        i = i + 2;
    }

    
    //  problem 9
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    if (33 <= x)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }


    return 0;
}

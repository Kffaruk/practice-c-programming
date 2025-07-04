#include <stdio.h>
int main()
{
    // practice 1

    int age;
    float weight;
    char grade;
    printf("Enter your data: ");
    scanf("%d %f %c", &age, &weight, &grade);
    printf("age: %d\n", age);
    printf("grade: %c\n", grade);
    printf("weight: %.2f\n", weight);
    
    
    // practice 2


    const float PI = 3.1416;
    float  area,radius;
    printf("Enter radius : ");
    scanf("%f",  &radius);
    area = radius*radius*PI;
    printf("%.2f\n", area);
    
    // practice 3


    int a,b;
    printf("Enter number: ");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (float)a / b);


    // practice 4

    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Hello, %s Welcome.", name);

    // practice 5


    int a,b;
    printf("Enter number: ");
    scanf("%d %d", &a, &b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %.2f\n", (float)a / b);
    printf("a modulus b = %d\n", a % b);


    // practice 6

    int num;
    printf("Enter your value: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("This number is Positive");
    }else if(0 > num){
        printf("This number is negative");
      }else{
        printf("This number is zero");
    }



    
    return 0;
}

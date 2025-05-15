// practice data type and user input output scanf

#include <stdio.h>

int main()
{

    int age = 19;
    float hight = 5.5;
    char grade = 'A';
    printf("My age is: %d\n", age);
    printf("My hight is: %.1f\n", hight);
    printf("My grade is: %c\n", grade);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your are %d year old.\n", age);
    float height;
    char grade;
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Your height is: %.1f\n", height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);
    printf("Your grade is: %c\n", grade);

    // practice Operators in C

    int a = 30, b = 20;
    printf("The addition is: %d\n", a + b);
    printf("The subtraction is: %d\n", a - b);
    printf("The division is: %d\n", a / b);
    printf("The multiplication is: %d\n", a * b);
    printf("The modulus is: %d\n", a % b);

    // user input

    int x, y;
    printf("Enter your two value:");
    scanf("%d %d", &x, &y);
    printf("The addition is: %d\n", x + y);
    printf("The subtraction is: %d\n", x - y);
    printf("The division is: %d\n", x / y);
    printf("The multiplication is: %d\n", x * y);
    printf("The modulus is: %d\n", x % y);

    // convert intiger data type to float data type

    int x, y;
    printf("Enter the value:");
    scanf("%d %d", &x, &y);
    printf("The value is:%d\n", x + y);

    // convert float

    float division = (float)x / y;
    printf("The division number is:%.1f\n", division);
    printf("The modulus number is:%d", x % y);

    // character to intiger convert and printf ASCII number

    char code;
    printf("Enter character:");
    scanf(" %c", &code);
    printf("ASCII number is:%d", (int)code);

    // intiger to character convert and printf character

    char code;
    printf("Enter the ASCII number:");
    scanf(" %d", &code);
    printf("Character is:%c", (char)code);

    return 0;
}
// Practice C Data Type
#include <stdio.h>
int main()
{

    int sum;
    int x = 20;
    float y = 10.5;
    sum = x + y;

    printf("The value is:%.2f", y);

    char math, bangla, eng;
    math = 'A';
    bangla = 'B';
    eng = 'C';
    printf("%c", eng);

    char ch;
    ch = 65;
    printf("%c\n", ch);
    ch = 66;
    printf("%c\n", ch);
    ch = 67;
    printf("%c\n", ch);
    ch = 69;
    printf("%c\n", ch);
    ch = 70;
    printf("%c\n", ch);
    ch = 71;
    printf("%c\n", ch);
    ch = 72;
    printf("%c\n", ch);

    float SSC_result;
    SSC_result = 4.50;
    printf("%.2f\n", SSC_result);

    float english = 75.5;
    float bangla = 95.5;
    float math = 65.5;
    float department = 55.5;
    float total_marks;
    total_marks = english + bangla + math + department;
    printf("Total mark is:%.2f\n", total_marks);

    return 0;
}
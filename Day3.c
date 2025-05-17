#include <stdio.h>
int main()
{
  int n;
  double x;
  x = 10.5;
  n = (int)x;

  printf("Value of n is %d\n", n);
  printf("Value of x is %.1lf\n", x);

  // check intiger value capacity

  int a;
  a = 1000;
  printf("Value of a is %d", a);
  a = -21000;
  printf("Value of a is %d", a);
  a = 10000000;
  printf("Value of a is %d", a);
  a = -10000000;
  printf("Value of a is %d", a);
  a = 100020004000503;
  printf("Value of a is %d", a);
  a = -4325987632;
  printf("Value of a is %d", a);

  // input character value without scanf

  char ch;
  printf("Enter the first letter of your name: ");
  ch = getchar();
  printf("The first letter of your name is: %c\n", ch);

  int x, y;
  printf("Enter your value:");
  scanf("%d", &x);
  printf("x value is:%d", x);
  scanf("%d", &y);
  printf("y value is:%d", y);

  // practice if/else

  int sum;
  printf("Enter the value:");
  scanf("%d", &sum);
  if (sum > 0)
  {
    printf("The value up to 0\n");
  }
  else if (sum < 0)
  {
    printf("The value is under 0\n");
  }
  else
  {
    printf("The value is zero ");
  }

  int x = 50, y = 100, value;
  printf("Enter your value:");
  scanf("%d%d", &x, &y);
  value = x + y;
  if (value > 500)
  {
    printf("The value up to 500");
  }
  else if (0 < value)
  {
    printf("The value under 500");
  }
  else
  {
    printf("The value is zero");
  }

  // practice if/else if/else

  int marks;
  printf("Enter marks number:");
  scanf("%d", &marks);
  if (marks >= 0 && marks <= 100)
  {
    printf("A+\n");
  }
  else if (marks >= 70)
  {
    printf("A\n");
  }
  else if (marks >= 60)
  {
    printf("B\n");
  }
  else if (marks >= 50)
  {
    printf("C\n");
  }
  else if (marks >= 40)
  {
    printf("D\n");
  }
  else
  {
    printf("You are fail");
  }

  // switch  practice
  int day;
  printf("Enter day number(1 to 7)");
  scanf("%d", &day);
  switch (day)
  {
  case 1:
    printf("Sunday\n");
    break;
  case 2:
    printf("Monday\n");
    break;
  case 3:
    printf("Tuesday");
    break;
  case 4:
    printf("Wesday\n");
    break;
  case 5:
    printf("Tashday\n");
    break;
  case 6:
    printf("Friday\n");
    break;
  case 7:
    printf("Sanday\n");
    break;

  default:
    printf("Sorry! Invalid day");
    break;
  }

  return 0;
}

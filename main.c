#include <stdio.h>
#include "myfunc.h"

void testAdd(int a, int b, const int expected)
{
  int result = add(a, b);
  if (result == expected)
  {
    printf("Add (%d + %d) got expected value %d.\n", a, b, expected);
  }
  else
  {
    printf("Add (%d + %d) got incorrect result %d, expecting %d.\n", a, b, result, expected);
  }
}

void testSubtract(int a, int b, const int expected)
{
  int result = subtract(a, b);
  if (result == expected)
  {
    printf("Subtract (%d - %d) got expected value %d.\n", a, b, expected);
  }
  else
  {
    printf("Subtract (%d - %d) got incorrect result %d, expecting %d.\n", a, b, result, expected);
  }
}

void testAdd_f(float a, float b, const float expected)
{
  //const float expected = 10.5;
  float result = add_f(a, b);
  if (result == expected)
  {
    printf("Add_f (%f + %f) got expected value %f.\n", a, b, expected);
  }
  else
  {
    printf("Add_f (%f + %f) got incorrect result %f, expecting %f.\n", a, b, result, expected);
  }
}

int main(int argc, char *argv[])
{
  hello();
  testAdd(5, 11, 16);
  testAdd(-4, 7, 3);
  testAdd(99, -101, -2);
  testAdd(-2, -3, -5);
  testSubtract(10, 8, 2);
  testSubtract(5, 11, -6);
  testSubtract(-8, -3, -11);
  testSubtract(8, -3, 11);
  testAdd_f(4.2, 6.3, 10.5);
  testAdd_f(-4.2, 6.3, 2.1);
  testAdd_f(8.8, -6.3, 2.5);
  testAdd_f(-2.6, -101.2, -103.8);
}



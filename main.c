#include <stdio.h>
#include "myfunc.h"

void testAdd()
{
  const int expected = 16;
  int result = add(5, 11);
  if (result == expected)
  {
    printf("Add got expected value %d.\n", expected);
  }
  else
  {
    printf("Add got incorrect result %d, expecting %d.\n", result, expected);
  }
}

void testSubtract()
{
  const int expected = -6;
  int result = subtract(5, 11);
  if (result == expected)
  {
    printf("Subtract got expected value %d.\n", expected);
  }
  else
  {
    printf("Subtract got incorrect result %d, expecting %d.\n", result, expected);
  }
}

void testAdd_f()
{
  const float expected = 10.5;
  float result = add_f(4.2, 6.3);
  if (result == expected)
  {
    printf("Add_f got expected value %f.\n", expected);
  }
  else
  {
    printf("Add_f got incorrect result %f, expecting %f.\n", result, expected);
  }
}

int main(int argc, char *argv[])
{
  hello();
  testAdd();
  testSubtract();
  testAdd_f();
}



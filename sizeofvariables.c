#include<stdio.h>

int main()
{
  char c = 'a';
  unsigned int ua = 245;
  int a = 545;
  float f = 12.345;
  double d = 123.456;
  long double ld = 123.4567;

  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));
  printf("unsigned int ua value: %d and size: %lu bytes\n", ua, sizeof(ua));
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("float f value: %f and size: %lu bytes\n", f, sizeof(f));
  printf("double d value: %lf and size: %lu bytes\n", d, sizeof(d));
  printf("long double ld value: %lf and size: %lu bytes\n", ld, sizeof(ld));
}


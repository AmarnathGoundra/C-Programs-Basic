//ARITHMETIC OPERATIONS
#include <stdio.h>
int main()
{
  float a,b,c;
  int d,e,f;
  printf("Enter the two values for operation :\n");
  scanf("%f%f",&a,&b);
  d=a;
  e=b;
  c=a+b;
  printf("%f + %f = %f  &\t", a,b,c);
  f=d+e;
  printf("%d + %d = %d\n", d,e,f);
  c=a-b;
  printf("%f - %f = %f  &\t", a,b,c);
  f=d-e;
  printf("%d - %d = %d\n", d,e,f);
  c=a*b;
  printf("%f * %f = %f  &\t", a,b,c);
  f=d*e;
  printf("%d * %d = %d\n", d,e,f);
  c=a/b;
  printf("%f / %f = %f  &\t", a,b,c);
  f=d/e;
  printf("%d / %d = %d\n", d,e,f);
  f=d%e;
  printf("%d / %d gives remainder = %d\a", d,e,f);
  return 0;

}

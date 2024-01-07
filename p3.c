//string correctiond
#include<stdio.h>
#include<string.h>

int main()
{
  char c[]="Amar";
  printf("My name is %s\n",c);

  c[3]='n';
  printf("My name is %s\n",c);

  char *a[]={"amar","ammu","vinay","teja","mallik"};
  printf("The best student is %s\n",a[1]);

  a[1]="anjali";
  printf("The best student is %s\n",a[1]);
}
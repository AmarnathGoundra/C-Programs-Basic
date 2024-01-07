//string compare, string length, string adding, string copying, string upper, string lower, string reverse
#include<stdio.h>
#include<string.h>

int main()
{
  char a[50];
  char b[50];
  puts("STRING1: \n Enter your name\n");
  scanf("%s",a);
  puts("STRING2: \n Enter your address\n");
  scanf("%s",b);
  
  int x=strlen(a);
  int y=strlen(b);
  printf("STRING LENGTH: \n %d is length of name and %d id length of address\n",x,y);

  int z=strcmp(a,b);
  if(z<0){
     printf("STRING COMPARE: \n a is less than b\n");
  }
  else if(z>0){
     printf("STRING COMPARE: \n a is greater than b\n");
  }
  else{
     printf("STRING COMPARE: \n a is equal to b\n");
  }

  strcat(a,b);
  printf("STRING ADDING: \n string adding : \n %s\n",a);
  strcpy(a,b);
  printf("STRING COPYING: \n string copying : \n %s\n",a);

  printf("STRING UPPER CASE LETTERS: \n %s \n %s \n",strupr(a),strupr(b));

  printf("STRING LOWER CASE LETTERS: \n %s \n %s \n",strlwr(a),strlwr(b));

  printf("STRING REVERSE: \n %s \n %s \n",strrev(a),strrev(b));

}
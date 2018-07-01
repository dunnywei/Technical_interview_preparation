/*
 *Q1:Verify a given string is valid IP address with range 0..255
 *Writie a uni test for this
 */

#include <stdio.h>
#include <stdlib.h>
#include <string>



int verify(char *input)
{
  int result=0;
  int test=atoi(input);
  if((test>=0)&&(test><=255)
  {
      return 1;
  }
   
  return result;
}


int main ()
{
  char str[5]="132";
  printf("The result is %d\n",verify(str));
  
}

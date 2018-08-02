/*
 *link1->https://www.geeksforgeeks.org/program-decimal-binary-conversion/
 *link2->https://www.sanfoundry.com/c-program-number-decimal-to-binary-recursion/
*/
#include <stdio.h>
/*first way
 *
int convert(int _dec)
{  
   int remiander=0;
   int divident=0 
   if( _dec==1)
   {
      return 1;
   }
   divident=_dec/2;
   remiander=divident%2+10*convert(divident);
   return remiander;                             
   
}
*/

/*
second way
*/
int convert(int _dec)
{  
   int number[10];
   int index=0;
   
   while(_dec>0)
   {
      _dec/=2;
      number[index++]=_dec%2;
      printf("number[index++] is %d \n",number[index]);
   }
   
   return 0;
}
   
   

int main(
   int dec,bin;
   
    printf("Enter a decimal number: ");

    scanf("%d", &dec);

    bin = convert(dec);

    printf("The binary equivalent of %d is %d.\n", dec, bin);

 

    return 0;
}

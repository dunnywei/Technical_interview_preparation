#include <stdio.h>
#include <string.h>
#include <math.h>
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
   int index2;
   double sum=0.0f;
   int index3=0;
   while(_dec>0)
   {
      _dec/=2;
      number[index]=_dec%2;
      printf("number[index] is %d with index %d \n",number[index],index);
      index++;
   }
   printf("----------------- \n");

   index2=--index;
   while(index2>=0)
   {
       printf("number[index2] is %d with index2 %d \n",
       number[index2],index2);

       //sum+=(double)number[index2]*pow(10,index3);
       //sum=  0*10^0=0
       //sum=0+1*10^1=10
       //sum=10+0*10^2=10
       //sum=10+1*10^3=1010->wrong
       
       //sum=       1*10^0=1
       //sum=1  +   0*10^1=1
       //sum=1  +   1*10^2=101
       //sum=101+   0*10^3=101->right
       sum+=(double)number[index3]*pow(10,index3);
      
     
         
       printf("pow(10,index3)is %f with index3 %2.f \n",pow(10,index3),index3);
       printf("sum is %10.f \n",sum);
      
       index2--;
       index3++;
       printf("---\n");

   }
   
   
   return sum;
}
   
   

int main(){
   int dec;
   int bin;
   
   printf("Enter a decimal number:");
   scanf("%d", &dec);
   bin = convert(dec);
   printf("The binary equivalent of %d is %d.\n", dec, bin);
    return 0;
}
//Link1->https://www.geeksforgeeks.org/program-decimal-binary-conversion/

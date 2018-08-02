/*
 *link1->https://www.geeksforgeeks.org/program-decimal-binary-conversion/
 *link2->https://www.sanfoundry.com/c-program-number-decimal-to-binary-recursion/
*/
#include <stdio.h>


int main(
   int dec,bin;
   
    printf("Enter a decimal number: ");

    scanf("%d", &dec);

    bin = convert(dec);

    printf("The binary equivalent of %d is %d.\n", dec, bin);

 

    return 0;
}

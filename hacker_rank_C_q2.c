#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[100];
    scanf("%c \n",&ch);
    printf("%c \n",ch);
    
    scanf("%[^\n]%*c",s);
    //scanf("%[^\n]%*c", s)
    printf("%s",s);
    return 0;
}

/*
 *scanf("%[^\n]%*c", s);
 *
 *In order to take a line as input, you can use scanf("%[^\n]%*c", s); 
 *where s is defined as char s[MAX_LEN] where MAX_LEN is the maximum size of s.
 *Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
 */

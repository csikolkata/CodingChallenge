#Problem:-
#Write a C program that takes user input, checks for positive integer and prints "Yes" 
# if it is a power of 2, else prints "No" by default for #whatever other case. 
# Use stdio.h but code can't have semi-colon (;)
###################################

#Official Solution:- (courtesy Snehasis Banerjee)

void main(int x, float f)
{
    if( printf("Enter a positive integer: ") &&
       scanf("%f",&f) && (x=f) && (x==f) && x > 0
       && (x&(x-1)) == 0 ? printf("Yes") : printf("No")
       ) {  }
}
###################################

#Winning Solution:- (courtesy Bidyut Chakraborty)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int c, char *v[])
{
    if(printf(ceil(log10(atoll(v[1])))==strlen(v[1])?atoll(v[1])>0?!((atoll(v[1])&((atoll(v[1])-1))))?"YES":"NO":"NO":"NO")){}
}

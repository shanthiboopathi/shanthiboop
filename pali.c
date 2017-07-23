#include<stdio.h>
int main()
{
int n,reverse Integer=0,remainder,original Integer;
printf("Enter an Integer:");
scanf("%d",&n);
original Integer=n;
while(n!=0)
{
remainder=n%10;
reversed Integer=reversed Integer*10+remainder;
n/=10;
}
if(original Integer==reversed Integer)
printf("%d is a palindrome.",original Integer);
else
printf("%d is not a palindrome.",original Integer);
return 0;
}

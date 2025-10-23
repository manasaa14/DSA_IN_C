//GCD OF 2 NOS
#include <stdio.h>
#include <stdlib.h>
int gcd (int a,int b)
{
  if (a==b)
    return a;
    else if(a>b)
    return gcd (a-b,b);
    return gcd (b,a);
}
int main(){
int a,b;
printf("\n read values for a and b :");
scanf("%d %d", &a,&b);
printf("%d",gcd(a,b));
return 0;
}

// TOWER OF HANOI 
#include <stdio.h>
#include <stdlib.h>
void TOH(int n,char s,char d,char t)
{
    if(n==1)
        printf("\nMove %d disc from %c to %c", n,s,d);
    else
    {
        TOH(n-1,s,t,d);
        printf("\nMove %d disc from %c to %c",n,s,d);
        TOH(n-1,t,d,s);
    }
}
int main()
{
    int n;
    printf("\nRead number of disc:");
    scanf("%d", &n);
    TOH(n,'S','D','T');
    return 0;
}

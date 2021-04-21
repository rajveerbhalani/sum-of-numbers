#include<stdio.h>
int sum(int n);
int main()
{ 
long int n,result;
printf("enter any number:-");
scanf("%d",&n);
result = sum(n);
printf(" sum of %d is %d", n , result);
return 0;
}
 int sum(int n)
 {if(n==0)
 { return 0;
 }
 else
 { return (n%10 + sum(n/10));
 }
 }

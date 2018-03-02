#include<stdio.h>
int main()
{
int i,num,x;
scanf("%d",&num);
while(num!=0)
{
x=num%10;
if(x%2!=0)
{
printf("%d\t",x);
}
num=num/10;
}
return 0;
}

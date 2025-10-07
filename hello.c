#include <stdio.h>
int main()
{
int a,b;

printf ("enter first number\n");
scanf("%d",&a);

printf ("enter second number\n");
scanf("%d",&b);

if (a>b)
{
printf("%d is greater than %d",a,b);
}
else if (a==b)
{
printf("%d is equal to %d",a,b);
}
else{
printf("%d is greater than %d",b,a);
}
return 0;
}

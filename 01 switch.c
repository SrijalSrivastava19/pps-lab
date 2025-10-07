#include <stdio.h>
int main()
{
int firstnum = 24 , secondnum = 12 ;
char operator = '+' ;
switch (operator)
{
case '+':
    printf("%d\n", firstnum + secondnum);
    break;
case '-':
    printf("%d\n", firstnum - secondnum);
    break;
case '*':
    printf("%d\n", firstnum * secondnum);
    break;
case '/':
    printf("%d\n",firstnum/secondnum);
default:
    break;
}
return 0;
}
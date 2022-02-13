#include<stdio.h>
#include<math.h>
void main()
{
int a;
printf("Enter a positive number: \n");
scanf("%d, &a");
switch(a%2)
{
case 0:
printf("%d is an even number\n",a);
break;
case 1:
printf("%d is a odd number\n",a);
break;
}
}
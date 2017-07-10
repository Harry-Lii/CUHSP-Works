#include <stdio.h>

int main(int argc, char *argv[])
{
int n1, n2, sum, *p, *q,max;
printf("Give me the first number:\n");
scanf("%d", &n1);

printf("Give me the second number:\n");
scanf("%d",&n2);
p=&n1;
q=&n2;
if(*p>*q){
max=*p;
}
else{
max=*q;
}
sum=*p + *q;
printf("The sum of %d and %d is: %d. \n",*p,*q,sum);
printf("The max of the two is: %d.\n",max);
return 0;
}

#include <stdio.h>

int main (int argc, char *argv[])
{
int a=1,b=0,j,sum=0,product=1;
int n = atoi(argv[1]);
int o = atoi(argv[1]);
int s = atoi(argv[1]);
j=n%10;

while(n>=10){
n=n/10;
a=a*10;
b=b*10;
}
while(o>=1){
sum=sum+o%10;
o=o/10;
product=product*(o%10);
}
printf("It's first digit is %d.\n",n);
printf("It's last digit is %d.\n",j);
printf("The number after swapping is:%d.\n",(((s-a*n)+a*j)-j+n));
printf("The sum of all digits:%d\n", sum);
printf("The product of all digits:%d", product);
return 0;
}


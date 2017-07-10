#include <stdio.h>

int main (int argc, char *argv[])
{
int temp;
int n = atoi(argv[1]);

while(n!=0){
temp=temp*10+n%10;
n=n/10;
}
printf("The reverse of the number is: %d.",temp);

return 0;
}

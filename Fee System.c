#include <stdio.h>

int main (int argc, char *argv[])
{
int n = atoi(argv[1]);
if (n<=50){
printf("%f",1.2*n*0.5);
}
if (n>50 && n<=150){
printf("%f",1.2*(25+(n-50)*0.75));
}
if (n>150 && n<=250){
printf("%f",1.2*(100+(n-150)*1.2));
}
if (n>250){
printf("%f",1.2*(220+(n-250)*1.5));
}
return 0;
}

#include <stdio.h>
int main(int argc, char *argv[])
{
int i,j,ln,rn;
int list[]={42,23,55,89,76,54,25,99,4,2};
for (j=0;j<=8;j++)
{
for (i=0;i<=9;i++)
{
ln=list[i];
rn=list[i+1];
if (ln>rn){
list[i]=rn;
list[i+1]=ln;
}
}
}
printf("The sorted list is:");
for (i=0;i<=9;i++){
printf("%d, ",list[i]);
}
return 0;
}


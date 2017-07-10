#include <stdio.h>

int main (int argc, char *argv[])
{
int n1=atoi(argv[1]);
int n2=atoi(argv[2]);
int n3=atoi(argv[3]);
int n4=atoi(argv[4]);
int n5=atoi(argv[5]);

if ((n1+n2+n3+n4+n5)/5>90){
printf("A");
}
if ((n1+n2+n3+n4+n5)/5>80 && (n1+n2+n3+n4+n5)/5<90){
printf("B");
}
if ((n1+n2+n3+n4+n5)/5>70 && (n1+n2+n3+n4+n5)/5<80){
printf("C");
}
if ((n1+n2+n3+n4+n5)/5>60 && (n1+n2+n3+n4+n5)/5<70){
printf("D");
}
if ((n1+n2+n3+n4+n5)/5<60){
printf("F");
}

return 0;
}


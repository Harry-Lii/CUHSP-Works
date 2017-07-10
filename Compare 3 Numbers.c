#include <stdio.h>

int main (int argc, char *argv[])
{
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);
int n3 = atoi(argv[3]);
if ((n1>n2 && n1>n3) || (n1=n3>n2) || (n1=n2>n3)){
printf("Max is %d",n1); 
}
else if ((n2>n1 && n2>n3) || (n2=n3>n1) || (n2=n1>n3)){
printf("Max is %d",n2);
}
else if ((n3>n1 && n3>n2) || (n2=n3>n1) || (n3=n1>n2)){
printf("Max is %d",n3);
}
else{
printf("They are equal");
}
return 0;
}

#include <stdio.h>

int main (int argc, char *argv[])
{
int n=atoi(argv[1]);

if (n%2==0){
printf("It's even.");
}
if (n%2==1){
printf("It's odd.");
}

return 0;
}

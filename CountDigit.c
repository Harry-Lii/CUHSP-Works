#include <stdio.h>

int main (int argc, char *argv[])
{
int i=1,j;
int n = atoi(argv[1]);

while (n/10>0){
i++;
n=n/10;
}
printf("It has %d digits",i);

return 0;
}

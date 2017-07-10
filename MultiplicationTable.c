#include <stdio.h>

int main (int argc, char *argv[])
{
int i,j;
int n = atoi(argv[1]);

for(i=1;i<=n;i++){
for(j=1;j<=i;j++)
printf("%d*%d=%d\t",i,j,i*j);
}

return 0;
}

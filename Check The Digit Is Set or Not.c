#include <stdio.h>

int main()
{
int a,b;
printf("Input the number:");
scanf("%d", &a);
printf("Input which bit would u like to know:");
scanf("%d", b);

if (a & 1<<b)
{
printf("The bit is set.");
}
else
{
printf("The bit is 0.");
}

return 0;
}

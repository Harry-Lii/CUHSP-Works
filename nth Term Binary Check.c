#include <stdio.h>

int result,position,i;
int n_bit_position(int x,int position);

void main()
{
unsigned int number;
printf("Enter the unsigned integer:\n");
scanf("%d", &number);
printf("enter position\n");
scanf("%d", &position);
n_bit_position(i, position);
if (result & 1)
printf("YES\n");
else
printf("NO\n");
}
int n_bit_position(int number,int position)
{
result = (number>>(position));
}

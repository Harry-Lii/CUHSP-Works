#include <stdio.h>

int main (int argc, char *argv[])
{
int n=atoi(argv[1]);

if (n>0){
printf("It's positive.");
}
else if (n<0){
printf("It's negative.");
}
else{
printf("It's 0.");
}
return 0;
}

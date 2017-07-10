#include <stdio.h>

int main(int argc, char *argv[])
{
int i;
int list[]={24,23,55,89,76,54,25,99,4};
for(i=0;i<9;i++){
if (list[i]==atoi(argv[1])){
printf("The number is in the list!\n");;
printf("The location of the element is: %d.",i);
break;
}
if (i==8){
printf("The number is not in the list!");
break;
}
}
return 0;
}

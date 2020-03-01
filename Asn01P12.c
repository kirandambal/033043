#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
int n;
n= atoi(argv[1]);
int i,j,k;
if(n%2==0)
{
printf("Required odd integer as input..\n");
exit(0);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==0||j==(n/2)+i||i+j==n-1&&i>(n/2)||i+j==n+(n/2)-1||i==n-1||i==j&&i<=(n/2)||j==0||j==n-1||j==(n/2)||i==(n/2))
printf("*");
else
printf(" ");
}
printf("\n");
}
}










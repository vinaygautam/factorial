#include<stdio.h>
int main()
{int x,i;
scanf("%d",&x);
int prod=1;
for(i=x;i>=1;i--)
{prod=prod*i;
}
printf("factorial %d",prod);
}

#include<stdio.h>
int main()
{int n,i;
scanf("%d",&n);
int prod=1;
for(i=n;i>=1;i--)
{prod=prod*i;
}
printf("factorial %d",prod);
}

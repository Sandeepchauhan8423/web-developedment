#include <stdio.h>
int main()
{
int n = 7;
int x = 1;
int i,j;
for(i=1;i <=n;i++)
{
for (j =1;j <=x;j++)

{
    printf("%2d", x);
}
if (i <=n/2)
x += 2;
else
x -= 2;
printf("\n");
}
return 0;
}
    

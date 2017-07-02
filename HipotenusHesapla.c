#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, c;
	printf("birinci kenar : ");
	scanf("%d",&a);
	printf("ikinci kenar : ");
	scanf("%d",&b);
	
	c = sqrt((a*a)+(b*b));
	
	printf("hipotenus %d dir. ",c);
}

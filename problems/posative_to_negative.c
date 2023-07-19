#include <stdio.h>

int main()
{
	int n;
	
	printf("input negative numbe:\n");
	scanf("%d", &n);

	if(n >= 0 )
	{
		printf("input negative number");
	}
	else
	{
		printf("%d", n * -1);
	}
	return 0;
}

#include <stdio.h>

void smile();
int main()
{
	int i;
	for(i=0;i<3;i++)
		smile();
	printf("\n");

	for(i=0;i<2;i++)
		smile();
	printf("\n");
	smile();
	printf("\n");
	return 0;
}

void smile()
{
	printf("smile!");
}

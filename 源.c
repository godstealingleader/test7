#include <stdio.h>


void reverse()
{
	char c;
	scanf_s("%c",&c);
	if (c != '\n')
	{
		reverse();
		printf("%c", c);
	}

}


main()
{
	printf("Enter:");
	reverse();
	return 0;
}
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int a[] = {1, 2, 3, 4};

main()
{
	char arr[20];
	char (*string)[20] = &arr;
	
	printf("\t%20p\t%20p\n size of\t %13u\t%13u\n", (void *) string, string[0], sizeof(string), sizeof(arr));
/*	printf("%d\n",  sizeof (int) *p);
	/*size_t b = sizeof(size_t) *p;*/
	return 0;
}

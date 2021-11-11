#include <stdio.h>
#include <string.h>

#include "askname.h"

int main(int argc, char **argv)
{
	char first[255], last[255];
	
	askme(first, last);
	
	printf("Hello, %s %s!\n", first, last);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *arr[1024];
	int i = 0;
	char str[] = "strtok me baby !!";

	arr[i] = strtok(str, " ");
	i++;
	while ((arr[i] = strtok(NULL, " ")) != NULL)
	{
		i++;
	}
	for (i = 0; arr[i] != NULL; i++)
	{
		printf("%s\n", arr[i]);
	}
	return (0);
}
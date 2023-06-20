#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int arc, char **arv)
{
	if (arc != 2)
		return (printf("error\n"));
	int j = strlen(arv[1]);
	printf("j = %d\n", j);
	int i = 0;
	while(arv[1][i])
	{
		printf("%c\n", arv[1][i] + i);
		i++;
	}
	return 0;
}

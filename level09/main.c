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
		printf("%c\n", arv[1][i] - i);
		i++;
	}
	printf("%c\n", 130 - i++);
	printf("%c\n", '^' - i++);
	printf("%c\n", '?' - i++);
	printf("%c\n", 'p' - i++);
	printf("%c\n", 130 - i++);
	printf("%c\n", '0' - i++);
	printf("%c\n", 131 - i++);
	printf("%c\n", 130 - i++);
	printf("%c\n", 219 - i++);
	printf("%c\n", 131 - i++);
	printf("Du ?\n");
	i++;
	printf("%c\n", '{' - i++);
	printf("%c\n", '^' - i++);
	printf("%c\n", '?' - i++);
	printf("%c\n", 140 - i++);
	printf("%c\n", 137 - i++);
	return 0;
}

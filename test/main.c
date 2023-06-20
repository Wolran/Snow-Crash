#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int arc, char **arv)
{
	if (arc != 2)
		return (printf("error\n"));
	int i = 0;
	// arv 1 = "f4kmm6p|="
	while(arv[1][i])
	{
		printf("%c\n", arv[1][i] - i);
		i++;
	}
	printf("%c\n", 130 - i++);
	printf("%c\n", 127 - i++);
	printf("%c\n", 'p' - i++);
	printf("%c\n", 130 - i++);
	printf("%c\n", 'n' - i++);
	printf("%c\n", 131 - i++);
	printf("%c\n", 130 - i++);
	printf("%c\n", 'D' - i++);
	printf("%c\n", 'B' - i++);
	printf("%c\n", 131 - i++);
	printf("%c\n", 'D' - i++);
	printf("%c\n", 'u' - i++);
	printf("%c\n", '{' - i++);
	printf("%c\n", 127 - i++);
	printf("%c\n", 140 - i++);
	printf("%c\n", 137 - i++);
	return 0;
}

// BD = -17
// Du = -19

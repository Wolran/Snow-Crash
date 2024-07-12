#include <stdio.h>
#include <string.h>

int main(int arc, char **arv)
{
	if (arc != 2)
		return (printf("need :%s \"string\"\n", arv[0]));
	int j = strlen(arv[1]);
	printf("nombre de caractere = %d\n", j);
	for (int i = 0; arv[1][i]; i++)
		printf("%c", arv[1][i] - i);
	printf("\n");
	return 0;
}

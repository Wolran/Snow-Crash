#include <stdio.h>

int main(int arc, char **arv)
{
	(void)arc;
	int h = 0;
	for(int x = 0; x < 26; x++)
	{
		for(int i = 1; arv[i]; i++)
		{
			h = 1;
			for(int y = 0; arv[i][y] ;y++)
			{
				if ((arv[i][y] <= 'z' && arv[i][y] >= 'a') || (arv[i][y] <= 'Z' && arv[i][y] >= 'A'))
				{
					if ((arv[i][y] <= 'z' && arv[i][y] >= 'a') && (arv[i][y] + h) > 'z')
						arv[i][y] = 'a' + h - 1;
					else if ((arv[i][y] <= 'Z' && arv[i][y] >= 'A') && (arv[i][y] + h) > 'Z')
						arv[i][y] = 'A' + h - 1;
					else
						arv[i][y] += h;
				}
			}
			h++;
			printf("%s ", arv[i]);
		}
		printf("\n");
	}
	return 0;
}

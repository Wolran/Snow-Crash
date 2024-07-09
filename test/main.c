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


//f3iji1j{wgxcwu63s3chkws
//f3iji1ju5yuevaus41q1afiuq

f4kmm6p|=\x82\x7f p \x82n\x83\x82DB\x83Du{\x7f\x8c\x89

f4kmm6p|=M-^B^?pM-^BnM-^CM-^BDBM-^CDu{^?M-^LM-^I

\x66\x34\x6b\x6d\x6d\x36\x70\x7c\x3d\x82\x7f\x70\x82\x6e\x83\x82\x44\x42\x83\x44\x75\x7b\x7f\x8c\x89

66 34 6b 6d 6d 36 70 7c 3d 82 7f 70 82 6e 83 82
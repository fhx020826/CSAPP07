#include <stdio.h>
#include <stdlib.h>

//编译时要加上 -fno-stack-protector
//-O1 或 -O0分别查看
//32位 时 程序要调整：unsigned long===> unsigned int, 40->??

void CopyString(char *s)
{
	char buf[20];
	strcpy(buf, s);
}

void hacked(void)
{
	while (1)
		printf("The program is hacked X64\n");
}


int main()
{
	char	badstr[] = "0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff";

	unsigned long   *pRIP = (unsigned long *)&badstr[24];

	*pRIP = (unsigned long)hacked;

	CopyString(badstr);
	getchar();

	return	0;
}

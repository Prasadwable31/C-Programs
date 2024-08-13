#include<stdio.h>
#pragma pack(1);

struct milin
{
	int i;
	int j;
	char f;
};



int main()
{
	struct milin s1;
//	s1.i = 10;
	
	printf("size of str %d\n",sizeof(s1));
	return 0;
}

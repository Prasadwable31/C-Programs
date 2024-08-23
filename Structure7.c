#include<stdio.h>

#pragma pack(1)				// 1 cha patit memory deta   we give nos 1,2,4,8,16
struct Demo
{
	int i;			// 4
	float f; 		// 4
	char ch;		// 4 = 1 used 3 loss
	float d;		// 4
	
}; 			       // 13 = with pragma pack(1)


int main()
{
	struct Demo dobj;
	
	printf("Size of the structure is : %d\n",sizeof(dobj));
	
	return 0;
}

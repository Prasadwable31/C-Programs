#include<stdio.h>

// Mulachi chappal = 11
// Mulichi chappal = 21
// Aie chi chappal = 51
// Wadlanchi chappal = 101

int main()
{
	int iToken = 0;
	
	printf("Tumacha token number sanga\n");
	scanf("%d",&iToken);
	
	switch(iToken)
	{
		case 11:
			printf("Mulachi chappal milali\n");
			break;
			
		case 21:
			printf("Mulichi chappal milali\n");
			break;
			
		case 51:
			printf("Aie chi chappal milali\n");
			break;
			
		case 101:
			printf("Wadlanchi chappal milali\n");
			break;			
			
		default:
			printf("Sorry asa token nahiye....\n");
			break;
	}
	
	return 0;
}

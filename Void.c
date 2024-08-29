#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.89;
	double d = 89.9078;
	
	char *cp = &ch;
	int *op = &i;
	float *fp = &f;
	double *dp = &d;
	
	void *vp = &ch;
	
	printf("Values of ch : %c\n",ch);		// A
	printf("Address of ch : %p\n",&ch);		// 100 Address
	printf("Values of cp : %p\n",cp);		// 100 Address
	printf("Data refer by cp : %c\n",*cp);   //A
	printf("Size of ch : %d\n",sizeof(ch));		// 1
	printf("Size of cp : %d\n",sizeof(cp));     // 4 & 8 
	
	printf("Data refer by vp : %c\n", *(char *)vp);
	vp = &i;
	printf("Data refer by vp : %d\n",*(int*)vp);
	vp = &f;
	printf("Data refer by vp : %f\n",*(float*)vp);
	
	
	return 0;
}

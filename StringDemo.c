#include<stdio.h>
#include<string.h>

int main()
{
	char Arr[5] = {'a','b','c','d','\0'};
	char Brr[5] = "abcd";
	char Crr[] = "abcd";
	
	printf("%s\n",Arr);			// abdc
	printf("%s\n",Brr);			// abdc
	printf("%s\n",Crr);			// abdc
	
	printf("Size of Arr : %d\n",sizeof(Arr));			// 5
	printf("Size of Brr : %d\n",sizeof(Brr));			// 5
	printf("Size of Crr : %d\n",sizeof(Crr));			// 5
	
	printf("Length of Arr : %d\n",strlen(Arr));			// 4
	printf("Length of Brr : %d\n",strlen(Brr));			// 4
	printf("Length of Crr : %d\n",strlen(Crr));			// 4
	
	return 0;
}

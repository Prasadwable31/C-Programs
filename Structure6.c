#include<stdio.h>

struct Demo
{
	int A;
	int B;
};	// 8

struct Hello
{
	int C;
	float D;
	struct Demo dobj;
};	//16


struct Demo
{
	int A;
	int B;
	struct Hello
	{
		int C;
		float D;
	};	

};	// 8




int main()
{	
	struct Hello hobj;
	
	hobj.C = 11;
	hobj.D = 10.9;
	hobj.dobj.A = 21;
	hobj.dobj.B = 51;
	
	return 0;
}

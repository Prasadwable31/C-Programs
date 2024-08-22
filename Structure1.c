 #include<stdio.h>

 // Structure decleration
 // There is no memory allocation at this point
 struct Demo
 {
 	int i;		// 4
 	float f;	// 4
 	int j;		// 4
 	double d;	// 8
 };
 
 int main()
 {
 	// Structure object / variable creation
 	// Memory gets alloated at this point
 	struct Demo obj1;		// 20 memory
 	struct Demo obj2;	   // 20 memory
 	struct Demo obj3;     // 20 memory
 	
 	// Member initilisation
 	obj1.d = 11.0; 
 	obj2.i = 21;
 	obj3.j = 51;
 	
  	printf("Size of obj1 is : %d\n",sizeof(obj1));	// 20
 	printf("Size of obj2 is : %d\n",sizeof(obj2));	// 20
 	printf("i of obj2 is : %d\n",obj2.i);			// 21
 	
 	// Extra size is known as padding.
 	
	return 0;
 }

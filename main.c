#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i=10;
	char c='a';
	
	int *iptr1;
	char *cptr;
	int *iptr2;
	
	iptr1 = &i;
	cptr = &c;
	iptr2 = iptr1;
	
	printf("i : %p\n%p (size: %i)\n", iptr1, &i,sizeof(iptr1));
	printf("c : %p\n%p (size: %i)\n", cptr, &c,sizeof(cptr));
	printf("iptr2: %p, %i\n", iptr2, *iptr2);
	
	return 0;
	
	
}

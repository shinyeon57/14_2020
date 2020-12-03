#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	int number;
	char title[20];
};

void main(void){
	struct Book *p;
	
	p = (struct Book*)malloc(2*sizeof(struct Book));

	
	if(p == NULL){
		printf("memory allocate error\n");
		return -1;
	}
	
	p->number = 1;
	strcpy(p->title, "C PROGRAMMING");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "ELECTRONICS");
	
	printf("%s %s\n", p->title, (p+1)->title);
	free(p);
	return	0;
}

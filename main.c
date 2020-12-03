#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	int n[5];
	
	printf("input 5 integers:");
	scanf("%d %d %d %d %d", n, n+1, n+2, n+3,n+4);
	
	insertDataToTail(n[0]);
	insertDataToTail(n[1]);
	insertDataToTail(n[2]);
	insertDataToTail(n[3]);
	insertDataToTail(n[4]);
	
	printf_list();
	
	printf_node(2);
}

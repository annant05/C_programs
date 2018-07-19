#include<stdio.h>
static int n;
int main(){
	n++;
	printf("%d\n",n);
	if(n==100)return 0;	
	main();
}

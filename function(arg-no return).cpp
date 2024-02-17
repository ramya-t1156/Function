#include<stdio.h>

int sum(int a,int b){
	printf(" Sum = %d",a+b)	;
}
int main(){
	int a,b;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	sum(a,b);
}

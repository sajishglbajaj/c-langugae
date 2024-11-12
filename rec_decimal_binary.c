#include<stdio.h>
void decimaltobinary(int a){
	if(a==0)return ;
	decimaltobinary(a/2);
	printf("%d",a%2);
}
int main(){
	int a=5;
	if(a==0){
		printf("0");
	}
	else{
		decimaltobinary(a);
	}
}


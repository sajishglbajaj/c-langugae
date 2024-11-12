#include<stdio.h>
int power(int m,int a){
	if(a==0)return 1;
	return m*power(m,a-1);
}
int main(){
	int a=4;
	printf("%d",power(2,a));
}


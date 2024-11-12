#include<stdio.h>
int gcd(int a,int b){
if(a>b){
	int c=a;
	a=b;
	b=a;
}
if(b%a==0){
	return a;
}
//int r=b%a;
//int d=b/a;
gcd(b%a,a);
}
int main(){
	int a=12,b=15;
	printf("%d",gcd(a,b));
}


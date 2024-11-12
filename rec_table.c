#include<stdio.h>
void table(int a,int i){
	if(i>10)return ;
	printf("%d\n",a*i);
	 table(a,i+1);
}
int main(){
	int a=2;
    table(a,1);  
}


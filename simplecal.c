#include<stdio.h>
int main(){
int a=2,b=3,c;
printf("press 1 for add \n");
printf("press 2 for sub \n");
printf("press 3 for div \n");
printf("press 4 for mul \n");
scanf("%d",&c);
if(c==1){
	printf("%d",a+b);
}
else if(c==2){
	printf("%d",a-b);
}
else if(c==3){
	printf("%d",a*b);
}
else if(c==4){
	printf("%d",a/b);
}else {
	printf("wrong number");
}

}


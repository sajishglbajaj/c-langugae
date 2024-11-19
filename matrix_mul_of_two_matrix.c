#include<stdio.h>
int main(){
int arr[2][2];
int arr1[2][2];
int arr2[2][2];
int i,j,k;
for ( i=0;i<2;i++){
for( j=0;j<2;j++){
scanf("%d",&arr[i][j]);}
}
for ( i=0;i<2;i++){
for( j=0;j<2;j++){
scanf("%d",&arr1[i][j]);}
}
for ( i=0;i<2;i++){
for( j=0;j<2;j++){
		arr2[i][j]=0;
  for( k=0;k<2;k++){
  	arr2[i][j]=arr2[i][j]+arr[i][k]*arr1[k][j];
  	
}

}

}
for ( i=0;i<2;i++){
for( j=0;j<2;j++){

printf("%d ",arr2[i][j]);
}
printf("\n");
}

}


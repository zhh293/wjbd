#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void initial(int**M,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			M[i][j]=0;
		}
	}
}
void transpose(int**M,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<i;j++){
			int temp=M[i][j];
			M[i][j]=M[j][i];
			M[j][i]=temp;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",M[i][j]);
		}
		printf("\n");
	}
}
//用递归实现行列式的计算 
void cut(int***M,int n,int roll){
int i;
int j;
for(j=0;j<=roll-2;j++){
for(i=n;i<=roll-2;i++){
  int temp = (*M)[j + 1][i];
(*M)[j + 1][i] = (*M)[j + 1][i + 1];
(*M)[j + 1][i + 1] = temp;
}
}
int k;
int h;
for(h=0;h<roll-1;h++){
	for(k=0;k<roll-1;k++){
  int temp=(*M)[h][k];
  (*M)[h][k]=(*M)[h+1][k];
  (*M)[h+1][k]=temp;
  
}
}
}

int determinat(int***M,int m,int n,int sum){
	if(m!=n){
		printf("@");
        return 0;
	}
	else{
	 	if(n==1){
	 		return (*M)[0][0];
		 }
		 else if(n==2){
		 	return ((*M)[0][0]*(*M)[1][1]-(*M)[0][1]*(*M)[1][0]);
		 }
		 else{
              int j;
		 	 for(j=0;j<n;j++){
              cut(M,j,n);
              sum=sum+pow(-1,j)*(*M)[0][j]*determinat(M,m-1,n-1,0);
			  }
              return sum;
		 }
	}
}
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int**arr=(int**)malloc(sizeof(int*)*m);
	int i;
	for(i=0;i<n;i++){
		arr[i]=(int*)malloc(sizeof(int)*n);
	}
	
	initial(arr,m,n);
	int h,j;
	for(h=0;h<m;h++){
		for(j=0;j<n;j++){
			scanf("%d",&arr[h][j]);
		}
	}
	transpose(arr,m,n);
int result=determinat(&arr,m,n,0);
printf("%d",result);
	for(i=0;i<n;i++){
		free(arr[i]);
	}
	free(arr);
	
	
	
	
	
	return 0;
}

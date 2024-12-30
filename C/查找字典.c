#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
typedef struct teacher{
	double salary;
	int number;
	char name[9];
}op;
double compare(void *a,void*b){
	return (*(double*)a-*(double*)b);
}
int main(){
	/*int p,k;
	scanf("%d %d",&p,&k);
	char**arr=(char**)malloc(sizeof(char*)*p);
	int i;
	for(i=0;i<p;i++){
		arr[i]=(char*)malloc(sizeof(char)*20);
		gets(arr[i]);
	}
	int s;
	scanf("%d",&s);
	char**brr=(char**)malloc(sizeof(char*)*s);
	int j;
	for(j=0;j<s;j++){
		brr[j]=(char*)malloc(sizeof(char)*6);
		gets(brr[j]);
	}*/
	op teacher[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d%s%lf",&teacher[i].number,teacher[i].name,&teacher[i].salary);
	}
	double average=0;
	double sum=0;
	int j;
	for(j=0;j<5;j++){
		sum=sum+teacher[j].salary;
	}
	average=sum/5;
	printf("The average=%-6.1f\n",average);
	int k,h;
	for(k=0;k<4;k++){
		for(h=0;h<4-k;h++){
			if(teacher[h].salary>teacher[h+1].salary){
				op student=teacher[h+1];
				teacher[h+1]=teacher[h];
				teacher[h]=student;
			}
		}
	}
	for(j=4;j>=0;j--){
		printf("%-10d%-10s%-6.1f\n",teacher[j].number,teacher[j].name,teacher[j].salary);
	}
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxlenth 100
typedef struct add{
	int data;
	struct add*next;
}op;
 void print(op*l,op*head){
	while(l->next!=head){
		printf("%d-->",l->data);
		l=l->next;
	}
	printf("NULL");
}
void setup(op*l){
	op*node=NULL;
	node=(op*)malloc(sizeof(op));
	l=node;
	op*a=l;
	op*b=l;
	node->next=a;
	scanf("%d",&node->data);
	while(node->data!=9999){
		node=(op*)malloc(sizeof(op));
		l->next=node;
		l=node;
		l->next=a;
		scanf("%d",&node->data); 
	}
	print(a,b);
}
int main(){
	/*op add;
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<maxlenth;j=j+2){
			scanf("%d %d",&add.data[i][j],&add.data[i][j+1]);
			if(add.data[i][j]==0&&add.data[i][j+1]==-1){
				break;
			}
		}
	}
	int arr[2][maxlenth];*/
/*	char arr[200];
	gets(arr);
	char*brr[100];
	int a=0;
	char*token=strtok(arr," ");
	while(token!=NULL){
		brr[a++]=token;
		token=strtok(NULL," ");
	}
	char*longest=brr[0];
	int i;
	for(i=1;i<a;i++){
		if(strlen(longest)<strlen(brr[i])){
			longest=brr[i];
		}
	}
	printf("%s",longest);*/
	op*l=NULL;
	setup(l);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*后插法处理
typedef struct stu{
	int data;
	struct stu*next;
}op;
void print(op*l){
	while(l->next!=NULL){
		printf("%d-->",l->data);
		l=l->next;
	}
	printf("NULL");
}
void endinsert(op*l){
	
	op*node=NULL;
	node=(op*)malloc(sizeof(op));
	l=node;
	op*zai=l;
	node->next=NULL;
	scanf("%d",&node->data);
	while(node->data!=9999){
		node=(op*)malloc(sizeof(op));
		l->next=node;
		l=node;
		node->next=NULL;
		scanf("%d",&node->data);
	}
	print(zai);
	
	
}*/
/*typedef struct insert{
	int data;
	struct insert *next;
}op;
void deleted(int i,struct insert*l){
	op*node=NULL;
	node=(op*)malloc(sizeof(op));
	l=node;
	op*zai=l;
	node->next=NULL;
	scanf("%d",&node->data);
	int j;
	for(j=0;j<4;j++){
		node=(op*)malloc(sizeof(op));
		l->next=node;
		l=node;
		node->next=NULL;
		scanf("%d",&node->data);
	}
	for(j=0;j<4;j++){
		if(j==i-1){
		   zai->next=zai->next->next;
		   zai->next->next=NULL;
		   printf("%d-->",zai->data);
		   zai=zai->next;
		}
		else{
			printf("%d-->",zai->data);
			zai=zai->next;
		}
	}
	printf("NULL");
	
}*/
//多项式加减法 
/*typedef struct node{
	int order,coeff;
	struct node*next;
}op;
void print(op*l){
		while(1){
			if(l->order!=0){
				printf("%d %d",l->order,l->coeff);
			}
		if(l->next==NULL){
			break;
		}
		l=l->next;
		printf("\n");
	}
}
void addpoly(op*a,op*b){
	op*node1=NULL;
	op*zai;
	node1=(op*)malloc(sizeof(op));
	a=node1;
	zai=a;
	node1->next=NULL;
	scanf("%d %d",&node1->order,&node1->coeff);
	while(node1->coeff!=-1&&node1->order!=0){
		node1=(op*)malloc(sizeof(op));
		a->next=node1;
		a=node1;
		node1->next=NULL;
		scanf("%d %d",&node1->order,&node1->coeff);
	}
	op*node2=NULL;
	op*zai1;
	node2=(op*)malloc(sizeof(op));
	b=node2;
	zai1=b;
	node2->next=NULL;
	scanf("%d %d",&node2->order,&node2->coeff);
	while(node2->order!=0&&node2->coeff!=-1){
		node2=(op*)malloc(sizeof(op));
		b->next=node2;
		b=node2;
		node2->next=NULL;
		scanf("%d %d",&node2->order,&node2->coeff);
	}
	op*zai2=NULL;
	op*zai3=NULL;
	op*node3=NULL;
	node3=(op*)malloc(sizeof(op));
	zai3=node3;
	zai2=zai3;
	node3->next=NULL;
	if(zai->coeff<zai1->coeff){
		zai3->coeff=zai1->coeff;
		zai3->order=zai1->order;
		zai1=zai1->next;
	}
	else if(zai->coeff==zai->coeff){
		zai3->coeff=zai1->coeff;
		zai3->order=zai1->order+zai->order;
		zai1=zai1->next;
		zai=zai->next;
	}
	else{
		zai3->coeff=zai->coeff;
		zai3->order=zai->order;
		zai=zai->next;
	}
	while(zai->next!=NULL||zai1->next!=NULL){
		node3=(op*)malloc(sizeof(op));
		zai3->next=node3;
		zai3=node3;
		node3->next=NULL;
	if(zai->coeff<zai1->coeff){
		zai3->coeff=zai1->coeff;
		zai3->order=zai1->order;
		zai1=zai1->next;
	}
	else if(zai->coeff==zai->coeff){
		zai3->coeff=zai1->coeff;
		zai3->order=zai1->order+zai->order;
		zai1=zai1->next;
		zai=zai->next;
	}
	else{
		zai3->coeff=zai->coeff;
		zai3->order=zai->order;
		zai=zai->next;
	}
	}
	print(zai2);
}*/

//int main(){
/*	op*man=NULL;
	endinsert(man);*/
	/*int i;
	scanf("%d",&i);
	op*l=NULL;
	deleted(i,l);*/
/*	op*a=NULL;
	op*b=NULL;
	addpoly(a,b);*/
	
//	return 0;
//}                        
int main() {
       char cArrText[80];   //正文
       char cArrWord[10];  //单词
       int iSum = 0;
       char* pc = cArrText;
       int iWordLength;    //单词长度
       gets(cArrText);
       gets(cArrWord);
       iWordLength = strlen(cArrWord);
       while (pc != NULL)
       {
              pc = strstr(pc,cArrWord);/*查找单词起始地址*/
              if (pc != NULL)
              {
                    iSum++;
                    pc=pc+iWordLength;/*移动到找到单词之后，作为下次查找的起始地址*/
              }
       }
       printf("正文：\n");
       puts(cArrText);
       printf("单词：\n");
       puts(cArrWord);
       printf("出现次数%d",iSum);
       return 0;
} 

























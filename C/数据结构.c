/*#include<stdio.h>
#include<stdlib.h>
typedef struct stu{
	int data;
	struct stu*next;
}op;*/
/*op*setup(){
	op*node=NULL;
	node=(op*)malloc(sizeof(op));
	node->next=NULL;
	return node;
}
void insert(op*a,int x){
	op*l=a;
	while(l->next!=NULL){
		l=l->next;
	} 
	op*node=NULL;
	node=(op*)malloc(sizeof(op));
	node->data=x;
	l->next=node;
	node->next=NULL;
	
}
void delete(op*a){
	op*l=a;
	while(l->next->next!=NULL&&l->next!=NULL){
		l=l->next;
	}
	if(l->next!=NULL){
	op*b=l->next;
	l->next=NULL;
	free(b);
	}
	else{
	return;
	}
	
}
int inquire(op*a){
	op*l=a->next;
	if(a->next==NULL){
		return 0;
	}
	int max=l->data;
	while(l->next!=NULL){
		l=l->next;
		if(max<l->data){
			max=l->data;
		}
	}
	if(max<l->data){
		max=l->data;
	}
	return max;
}*/
//int main(){
	/*int N;
	scanf("%d",&N);
	op*a=setup();
	int i;
	int result[N];
	int count=0;
	for(i=0;i<13;i++){
		int x,weight;
		scanf("%d",&x);
		if(x==0){
			int weight;
			scanf("%d",&weight);
			insert(a,weight);
		}
		else if(x==1){
			delete(a);
		}
		else{
			result[count++]=inquire(a);
		}
	}
	int j;
	for(j=0;j<count;j++){
		printf("%d\n",result[j]);
	}
	*/
/*	int n;
	scanf("%d",&n);
	char arr[pow(2,n)];
	gets(arr);
	
	return 0;
}*/
//��������ʶ
//Ŀǰ��������ȫ������е��ں� 
/*#include<stdio.h>
#include<math.h>
char A[1025];
void work(int low, int up)
{
    int mid = (low+up)/2;
    if (low!=up){
        work(low, mid);
        work(mid+1,up);
    }
    int i,a=0,b=0;
    for (i=low;i<=up;i++){
    	if (A[i]=='0') a++;
        else b++;
	}
        
    if (a!=0&&b!=0) printf("F");
    else if (b==0) printf("B");
    else printf("I");
}
int main()
{
    int n;
    scanf("%d", &n);
    scanf("%s", A+1);
    work(1, pow(2,n));
    return 0;
}*/
//ģ�������Ӽ��˳�
/*#include<stdio.h>
#include<stdlib.h>
#define max 100
typedef struct{
	int data[max];
	int top;
}op;
typedef enum{
	left_pare,right_pare,add,sub,mul,dive,mod
	,eos,num
}contenttype;
int eval(char arr){
	switch(arr){
		case '(': return left_pare;break;
		case ')': return right_pare;break;
		case '+': return add;break;
		case '-': return sub;break;
		case '*':return mul;break;
		case '/': return dive;break;
		case '%': return mod;break;
		case '\0': return eos;break;
		default:
		return num;break; 
	}
}
void cal(char*arr){
	int i=0;
	int op1,op2;
	op zhan;
	zhan.top=-1;
	int top=zhan.top;
	contenttype token;
	token=eval(arr[i]);
	while(token!=eos){
		if(token==num){
			zhan.data[++top]=arr[i]-'0';
			token=eval(arr[++i]);
		}
		else if(token==add){
			op1=zhan.data[top-1];
			op2=zhan.data[top];
			zhan.data[top--]=0;
			zhan.data[top]=op1+op2;
			token=eval(arr[++i]);
		}
		else if(token==sub){
			op1=zhan.data[top-1];
			op2=zhan.data[top];
			zhan.data[top--]=0;
			zhan.data[top]=op1-op2;
				token=eval(arr[++i]);
		}
		else if(token==mul){
			op1=zhan.data[top-1];
			op2=zhan.data[top];
			zhan.data[top--]=0;
			zhan.data[top]=op1*op2;
				token=eval(arr[++i]);
		}
		else if(token==dive){
			op1=zhan.data[top-1];
			op2=zhan.data[top];
			zhan.data[top--]=0;
			zhan.data[top]=op1/op2;
				token=eval(arr[++i]);
		}
		else if(token==mod){
			op1=zhan.data[top-1];
			op2=zhan.data[top];
			zhan.data[top--]=0;
			zhan.data[top]=op1%op2;
				token=eval(arr[++i]);
		}
	}
	printf("%d",zhan.data[top]);
}
int main(){
	char arr[]="82/2+56*-";
	printf("����һ������");
	int n;
	scanf("%d",&n);
	cal(arr);
	return 0;
}
*/

/*#include<stdio.h>
#define maxsize 100
#define ok 1
#define no 0
typedef struct zhan{
	int data[maxsize];
	int top;//top��ʼֵΪ-1����Ӧ����ĳ��λ�����ȥ 
}op;
int isempty(op stu){
	if(stu.top==-1){
		return ok;
	}
}
int isfull(op stu){
	if(stu.top==maxsize){
		return no;
	}
}
int push(int x,op stu){
	if(isfull(stu)==0){
		return -1;
	}
	stu.data[++stu.top]=x;
}
int pop(int *e,op stu){
	if(isempty(stu)==1){
		return -1;
	}
	*e=stu.data[stu.top--];
}
int main(){
	return 0;
}*/
//���������������������ʵ��
 

















 

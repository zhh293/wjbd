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
void print1(op*l,op*head){
int i=0;
while(i<=20){
printf("%d-->",l->data);
l=l->next;
i++;
}
printf("Null");
}
void yuesefu(op*l,int i,int n){
op*a=l;
int count=i;
while(count!=1){
if(count==2){
if(n%2!=0){
printf("剩下编号数为");
printf("%d",l->next->data);
}
else{
printf("剩下编号数为");
printf("%d",l->data);
}
}
int h;
for(h=0;h<n-2;h++){
l=l->next;
}
l->next=l->next->next;
count--;
l=l->next;
}

}
void setup1(op*l,int i,int n){
    op*node=NULL;
    node=(op*)malloc(sizeof(op));
    l=node;
    op*a=l;
    op*b=l;
    
    node->next=a;
    printf("请输入起始元素");
    scanf("%d",&node->data);
    while(node->data!=i){
        node=(op*)malloc(sizeof(op));
        l->next=node;
        l=node;
        l->next=a;
        printf("请输入结点中的元素");
        scanf("%d",&node->data); 
    }
    yuesefu(a,i,n);
}
void setup(op*l,int i,int n){
    op*node=NULL;
    node=(op*)malloc(sizeof(op));
    l=node;
    op*a=l;
    op*b=l;
    
    node->next=a;
    node->data=1;
    int count=1;
    while(count+1<=i){
        node=(op*)malloc(sizeof(op));
        l->next=node;
        l=node;
        l->next=a;
        node->data=count+1;
        count=count+1;
    }
    yuesefu(a,i,n);
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
/*    char arr[200];
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
    int i,n;
    printf("请输入人数和循环数");
    scanf("%d %d",&i,&n);
    if(n<=1){
    printf("你个煞笔长脑子了吗");
    return 0;
    }
    setup(l,i,n);
    
    return 0;
}

/*#include<stdio.h>
int main()
{
    char ch[10];
    gets(ch);
    int i;
    for(i=0;(1)   ; i++)
    {(
        if((2) )
          printf("非字母");
       else{
        switch( ch[i] )
        {
              case 'a':   case 'o': case 'e':
              case 'u':   case 'i':
                printf("小写元音字母\n");
               (3)
              case 'A':   case 'O': case 'E':
              case 'U':   case 'I':
                 printf("大写元音字母\n");
                break;
             (4)
                printf("辅音字符\n");
        }
       }
    }
    (5)
}*/
#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct zhan{
	int data[maxsize];
	int top;
}op;
int linist(op *l,int count){
    l->top=0;
    int i;
    for(i=0;i<10;i++){
    	printf("输入顺序栈中的元素"); 
    	scanf("%d",&l->data[i]);
    	l->top++;
	}
	if(l->top>maxsize){
		return -1;
	}
	else{
		l->data[l->top]=count;
	}   
	return 1;
}
int main(){
	op*countgroup=NULL;
	countgroup=(op*)malloc(sizeof(op));
	int i;
	printf("你想插入的元素");
	scanf("%d",&i);
int found=linist(countgroup,i);
	if(found){
		int j;
		for(j=0;j<=countgroup->top;j++){
			printf("%d ",countgroup->data[j]);
		}
	}
	free(countgroup);
	return 0;
}

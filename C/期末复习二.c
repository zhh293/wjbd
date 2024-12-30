/*struct Date
{
    int year;
    int month;
    int day;
    int week;
};
int valid(struct Date date){
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int brr[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	if(date.year>=0){
		if(date.year%4==0&&date.year%100!=0||date.year%400==0){
			if(date.month>0&&date.month<13){
				if(date.day>0&&date.day<=brr[date.month-1]){
					return 0;
				}
				else{
					return 1;
				}
			}
			else{
				return 1;
			}
		}
		else{
			if(date.month>0&&date.month<13){
				if(date.day>0&&date.day<=arr[date.month-1]){
					return 0;
				}
				else{
					return 1;
				}
			}
			else{
				return 1;
			}
		}
	}
	else{
		return 1;
	}
}
//蔡勒算法计算星期几(超纲了我操)
int week(struct Date *p) {
    int y = p->year - (p->month < 3);
    int m = (p->month + 9) % 12 + 1;
    int c = y / 100;
    int g = y % 100;

    int w = (p->day + (13 * m - 1) / 5 + g + g / 4 + c / 4 - 2 * c) % 7;
    // 调整w，使得0对应星期日，1对应星期一，以此类推
    return (w + 7) % 7;
}*/
/*#include<stdio.h>
int main()
{
    char weekDay[7][10] = {"Sunday","Monday","Thuesday","Wednesday","Thursday",
        "Firday","Saturday"};
    struct Date date, *p;
    p = &date;
   //输入有效日期
   do
   {    printf("Input date's year month and day");
        scanf("%d %d %d", &date.year, &date.month, &date.day);
    }while( valid(date));
    // 计算星期几
    p->week = week(p);
    // 输出月/日/年 星期几
    printf("%d / %d / %d %s\n", p->month, p->day, p->year,weekDay[p->week]);
    
    return 0;
}*/
/*struct Student
{
    int  iNum;
    char cName[20];
    float fGrade;
};
#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#include<string.h>
int search(struct Student stu[],int i,char name[]){
	int j;
	for(j=0;j<i;j++){
		if(strcmp(stu[j].cName,name)==0){
			return j;
		}
	}
	return -1;
}
void outputStu(struct Student l){
	printf("%d %s %lf",l.iNum,l.cName,l.fGrade);
}
void inputStu(struct Student* l){
	scanf("%d %s %f",&l->iNum,l->cName,&l->fGrade);
	
}
void printStus(struct Student stu[],int i){
	int j;
	for(j=0;j<i;j++){
		printf("%d %s %lf",stu[j].iNum,stu[j].cName,stu[j].fGrade);
		printf("\n");
	}
}
int main()
{

    struct Student stu[3] = {{101, "Bob",76},
                            {102,"Linda",88.5}};

    inputStu( stu+2 );   //输入某个学生信息
    printStus(stu, 3);   //输出所有学生信息
    //查找名为name的学生
    char name[] ="Linda";
    int i = search(stu,3, name);
    printf("%d\n",i);
    if(i<0)
        puts("查找无此人");
    else
        outputStu(stu[i]);//输出学生信息
    return 0;
}*/
/*# include <stdio.h>
# include <string.h>
void f(char* s1) {
   char c;
   if (*s1 != '\0') {
          c = *s1;
          strcpy(s1, s1 + 1);
          f(s1);
          putchar(c);
   }
}//依旧是函数的递归调用· 
int  main() {
   char s[] = "abcde";
   f(s);
return 0;
}*/
int strcompare(char*str1,char*str2){
	int found=0;
	while(*str1!='0'&&*str2!='0'){
		if(*str1==*str2){
			str1++;
			str2++;
			continue;
		}
		else if(*str1<*str2){
			found=-1;
			return found;
		}
		else{
			found=1;
			return found;
		}
	}
	if(*str1=='0'&&*str2!='0'){
		found=-1;
		return found;
	}
	if(*str1!='0'&&*str2=='0'){
		found=1;
		return found;
	}
	return found;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxlenth 100
/*typedef struct add{
	int data;
	struct add*next;
}op;
print(op*l,op*head){
	while(l->next!=head){
		printf("%d-->",l->data);
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
}*/ 
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
	/*op*l=NULL;
	setup(l);*/
	char*str1,*str2;
	str1=(char*)malloc(sizeof(char));
	str2=(char*)malloc(sizeof(char));
	gets(str1);
	gets(str2);
	if(strcompare(str1,str2)==0){
		printf("两个字符串相等");
	}
	else if(strcompare(str1,str2)==-1){
		printf("第一个字符串比较小");
	}
	else{
		printf("第二个字符串比较小");
	}
	free(str1);
	free(str2);
	return 0;
}















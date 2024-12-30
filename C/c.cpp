/*#include<stdio.h>
#include<string.h>
#include<math.h>
int sum=0;
int htoi(char*s,int length,int zaicun){
	char ch=s[--length];
	if(ch=='x'){
		return 0;
	}
	else if(ch>='0'&&ch<='9'){
		return pow(16,zaicun-length)*(ch-'0')+htoi(s,length,zaicun);
	}
	else if(ch>='a'&&ch<='f'){
		return pow(16,zaicun-length)*(ch-'a'+10)+htoi(s,length,zaicun);
	}
	else if(ch>='A'&&ch<='F'){
	return	sum+=pow(16,zaicun-length)*(ch-'A'+10)+htoi(s,length,zaicun);
	}
	else{
		return -1;
	}
}
int main(){
/*	signed char i=0;
	while(i>=0){
		printf("%d ",i);
		i++;
	}
	printf("%d",i);
	unsigned char j;
	for(j=0;;j++){
		if(j<j-1){
			break; 
		}
		printf("%d ",j);
	}*/
	/*char s[]="0x76a";
	int length=strlen(s);
	int result=htoi(s,length,length-1);
	printf("%d",result);
	return 0;
}*/
#include<stdio.h>
#include<string.h>
#define maxsize 2000
int main(){
char arr[maxsize];
memset(arr,'\0',maxsize);
fgets(arr,maxsize,stdin);
printf("%s\n",arr);
int i=0;
char brr[maxsize];
memset(brr,'\0',maxsize);
char crr[maxsize];
memset(crr,'\0',maxsize);
char drr[maxsize];
memset(drr,'\0',maxsize);
while(arr[i]!=' '&&arr[i]!=','&&arr[i]!='.'&&arr[i]!='\0'){
brr[i]=arr[i];
crr[i]=arr[i];
i++;
}
i++;
int max=strlen(brr);
int min=strlen(crr);
int index=0;
while(1){
while(arr[i]!=' '&&arr[i]!=','&&arr[i]!='.'&&arr[i]!='\0'){
drr[index++]=arr[i++];
}
i++;
int length=strlen(drr);
//printf("%d\n",length);
if(length>max){
max=length;
int j;
for(j=0;j<length;j++){
brr[j]=drr[j];
}
memset(drr,'\0',index);
index=0;
}
if(length<min){
min=length;
int h;
for(h=0;h<length;h++){
crr[h]=drr[h];
}
for(h=length;h<min;h++){
crr[h]='\0';
}
memset(drr,'\0',index);
index=0;
}
if(arr[i]=='\0') break;
index=0;
}
printf("%s\n",brr);
printf("%s\n",crr);
return 0;
}

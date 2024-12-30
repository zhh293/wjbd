#include<stdio.h>
#include<string.h>
int hermite(int n,int x){
	if(n==0){
		return 1; 
	}
	else if(n==1){
		return 2*x;
	}
	else{
		return 2*x*hermite(n-1,x)-2*(n-1)*hermite(n-2,x);
	}
}
void reverse(char a[],int length){
	if(length<0){
		return;
	}
	else{
		printf("%c",a[length-1]);
		reverse(a,length-1);
	}
}
int ispromeband(char a[],int start,int end){
	if(start>end){
		return 0;
	}
	else{
		int found=0;
		if(a[start]!=a[end]) found=1;
		return found+ispromeband(a,start+1,end-1);
	}
}
void biosearch1(int x,int a[],int left,int right){
	int mid=(right+left)/2;
	if(a[mid]==x){
		printf("%d",mid);
		return;
	}
	if(left>=mid){
		return;
	}
	biosearch(x,a,left,mid);
	biosearch(x,a,mid+1,right);
}
int biosearch(int x,int a[],int left,int right){
	int mid=(right+left)/2;
	if(a[mid]==x){
		return mid;
	}
	if(left>=mid){
		return -1;
	}
	biosearch(x,a,left,mid);
	biosearch(x,a,mid+1,right);
}
int main(){
	/*int n,x;
	scanf("%d%d",&n,&x);
	int result=hermite(n,x);
	printf("%d",result);*/
	/*char a[]="abcdefgh";
	int length=strlen(a);
	reverse(a,length);*/
	/*char arr[100];
	gets(arr);
	int length=strlen(arr);
    int result=	ispromeband(arr,0,length-1);
	if(result==0){
		printf("是回文");
	}
	else{
		printf("不是回文");
	}
	*/
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int length=sizeof(arr)/sizeof(int);
	int x;
	scanf("%d",&x);
   int result= biosearch(x,arr,0,length);
	printf("%d",result);
	return 0;
}

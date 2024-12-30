/*#include<stdio.h>
#include<math.h>
int weishu(int i){
	int b=1;
	for(;;b++){
		if(i/10==0){
			break;
		}
		i=i/10;
	}
	return b;
}
int tonggou(int i){
	int square=pow(i,2);
	int count=weishu(i);
	int j;
	int found=1;
	for(j=0;j<count;j++){
		if(square%10!=i%10){
			found=0;
		}
		square=square/10;
		i=i/10;
	}
	return found;
}
int main(){
	int i;
	for(i=1;i<=99;i++){
		if(tonggou(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}*/
#include<stdio.h>
#include<math.h>
typedef struct birth{
	int x,y;
}op;
int main(){
	int n,k,t;
	scanf("%d %d %d",&n,&k,&t);
	int i;
	op secret[n];
	for(i=0;i<n;i++){
		scanf("%d %d",&secret[i].x,&secret[i].y);
	}
	op askhelper[k];
	int j;
	for(j=0;j<k;j++){
		scanf("%d %d",&askhelper[j].x,&askhelper[j].y);
	}
	int h;
	op regulator[t];
	for(h=0;h<t;h++){
		scanf("%d %d",&regulator[h].x,&regulator[h].y);
	}
	int found=0;
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			if(askhelper[i].x==secret[j].x&&askhelper[i].y==secret[j].y){
				found=1;
			}
		}
	}
	if(found==0){
		return 0;
	}
	int count=0;
	int a,b,index=0;
	for(a=0;a<t;a++){
		int max=pow(regulator[a].x-secret[0].x,2)+pow(regulator[a].y-secret[0].y,2);
		for(b=1;b<n;b++){
			if(max<pow(regulator[a].x-secret[b].x,2)+pow(regulator[a].y-secret[b].y,2)){
				max=pow(regulator[a].x-secret[b].x,2)+pow(regulator[a].y-secret[b].y,2);
				index=b;
			}
		}
		int found=0;
	    for(j=0;j<k;j++){
	    	if(secret[index].x==askhelper[j].x&&secret[index].y==askhelper[j].y){
	    		found=1;
			}
		}
	 if(found) count++;
	}
	printf("%d",count);
	return 0;
}

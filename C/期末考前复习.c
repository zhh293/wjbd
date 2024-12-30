void qesort(int*arr,int n){
   int i=0,j=n-1;
   	while(i<j){
		int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}
void bubblesort(int*a,int n){
	int i,j;
	int found=0;
	for(j=0;;j++){
		found=0;
		for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			int temp;
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			found=1;
		}
	}
	if(found!=1){
		break;
	}
	}

}
int weishu(int a){
	int b=a;
	int i;
	for(i=1;;i++){
		if(b/10==0){
			break;
		}
		b=b/10;
	}
	return i;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ROW   3      // number of students
#define COL  4      // number of exams
/*int* jixiangshu(int*arr,int i,int n){
	int j,k;
	int*index=(int*)malloc(i*sizeof(int));
	memset(index,0,sizeof(int));
	int count1=0;
	for(k=0;k<n;k++){
		for(j=0;j<i;j++){
		int a=weishu(arr[j]);
		int h;
		int b=arr[j];
		int sum=0;
		for(h=0;h<a;h++){
			sum=sum+pow(b%10,k+2);
			b=b/10;
		}
		int count;
		for(count=0;count<i;count++){
			if(arr[count]==sum){
				index[count1++]=count;
			}
		}
	}
	int l;
	for(l=0;l<count1;l++){
		arr[index[l]]=0;
	}
	}
	free(index);
	return arr;
}*/

/*void paixu(char**arr,int n){
    for(int i=0;i<n-1;i++){
        if(strlen(arr[i])>strlen(arr[i+1])){
            char*temp=0;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int j=0;j<n-1;j++){
        if(strlen(arr[j])==strlen(arr[j+1])){
            int lenth=strlen(arr[j]);
            for(int k=0;k<lenth;k++){
                if(arr[j][k]==arr[j+1][k]){
                    continue;
                }
                else if(arr[j][k]>arr[j+1][k]){
                    char*temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
                else{
                    break;
                }
            }
        }
    }
}

*/
/*void paixu(int (*arr)[3],int k){
	int i; 
    for(i=0;i<k-1;i++){
        if(arr[i][1]>arr[i+1][1]){
           int temp;
           temp=arr[i][1];
           arr[i][1]=arr[i+1][1];
           arr[i+1][1]=temp;
        }
         if(arr[i][1]==arr[i+1][1]){
            if(arr[i][0]>arr[i+1][0]){
                int temp;
                           temp=arr[i][1];
                           arr[i][1]=arr[i+1][1];
                           arr[i+1][1]=temp;
            }
        }
    }
    
}*/
int max(float a[],int size)
{
    float max=a[0];
    int index = 0 , i;
    for ( i=1;i<size;i++)
    {
       if(a[i]>max)
       {
           max=a[i];
           index = i;
       }
    }
    return index;
}

int main(){
   /*int n,arr[n];
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        qesort(arr,n);
        int j;
        for(j=0;j<n;j++){
        	printf("%d\n",arr[j]);
		}*/
		
               /* int n;
                scanf("%d",&n);
                int arr[n];
                int i;
                for( i=0;i<n;i++){
                    scanf("%d",&arr[i]);
                }
               bubblesort(arr,n);
               for(i=0;i<n;i++){
               	printf("%d ",arr[i]);
			   }*/
               
    /*int n;
                    scanf("%d",&n);
                    char**arr=(char**)malloc(n*sizeof(char*));
                    for(int i=0;i<n;i++){
                     arr[i]=(char*)malloc(20*sizeof(char));
                    }    
                    for(int i=0;i<n;i++){
                        gets(arr[i]);
                    }
                    paixu(arr,n);
                    for(int i=0;i<n;i++){
                        printf("%s",arr[i]);
                    }
                    for(int j=0;j<n;j++){
                        free(arr[j]);
                    }
                    free(arr);*/    
              /*  int n,m,k;
                scanf("%d %d %d",&n,&m,&k);
              int arr[k][3];
              int i,j;
              for(i=0;i<k;i++){
              	
                  for(j=0;j<3;j++){
                      scanf("%d",&arr[i][j]);
                  }
              }
              paixu(arr,k);
              
              for(j=0;j<k;j++){
                  printf("%d",arr[j][2]);
              }
                */
         //吉祥数
		/* int n;
		 scanf("%d",&n);
		 int arr[255];
		 int i;
		 for(i=0;i<255;i++){
		 	scanf("%d",&arr[i]);
		 	if(getchar()!=' '){
		 		break;
			 }
		 } 
    	int*crr=jixiangshu(arr,i+1,n);
    	int j;
    	for(j=0;j<i;j++){
    		if(crr[j]!=0){
    			printf("%d ",crr[j]);
			}
		}
		if(arr[i]!=0){
			printf("%d",arr[i]); 
		}*/
	/*	int n;
		scanf("%d",&n);
		int arr[n][n];
		int k,h;
		for(k=0;k<n;k++){
			for(h=0;h<n;h++){
				scanf("%d",&arr[k][h]);
			}
		}
		int i,j;
	    for(i=0;i<n;i++){
	    	int temp;
	    	temp=arr[0][i];
	    	arr[0][i]=arr[i][0];
	    	arr[i][0]=temp;
		}
		for(j=1;j<n;j++){
			int temp;
			temp=arr[j][n-1];
			arr[j][n-1]=arr[n-1][j];
			arr[n-1][j]=temp;
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}     */
#define ROW   3      // number of students
#define COL  4      // number of exams
   /* int grade[ROW][COL]=
                        {  { 77, 68, 86, 73 },
                            { 96, 87, 89, 78 },
                            { 70, 90, 86, 81 } };
   float ave[ROW]={0};
   int i , exam ;

    char name[ROW][20] = {"贾强","林芳","丁一"};
   printf("科目  高等数学   英语   程序设计   计算机网络  平均分\n"    );
   for ( i = 0; i< ROW; i++ )
   {
     printf("%6s",name[i]);
     for ( exam=0 ; exam <COL ; exam++ )
       {
           printf("%8d",grade[i][exam]);
           ave[i] += grade[i][exam];
       }
       printf("%10.2f\n",ave[i]/COL);
   }
    int maxIndex = max(ave,ROW);
    printf("%s是第一名!\n",name[maxIndex]);*/
 /* int i; 
   char c; 
    for(i=1;i<=10;i++) {   
    	c=getchar( );   
	    if(c< '0' ||c> '9')   
	    continue ;    
		putchar(c); 
		 }  */
    /*int a=3,b=2,c=6,d=5,n=8;
    int m;
    int result=(m=a<b)&&(n=c-d);
    printf("%d",result);*/
   /* char ch='a';
    ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
    printf("%d",ch);*/
    char a[]="program",*ptr;
    for(ptr=a;ptr<a+7;ptr+=2){
    	putchar(*ptr);
	}
   return 0;
}

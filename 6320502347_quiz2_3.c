#include<stdio.h>
int main(){
int n,i,j,k,m,l,x=1;
scanf("%d",&n);
if(n<=10){
if(n<10)printf("%d",n);
else printf("9");
}
else{
for(i=10;i<n;i++)
    for(k=0,j=i;j>0;j/10,k++);
    int num[k];
    for(x=i,j=0;j<k;j++){
        for(m=0;m<k;m++)
        l*=10;
        num[k-j-1]=x%l;
    x/=l;
        }
        printf("%d %d",num[0],num[1]);
        }
}

#include<stdio.h>
int main(){
    int num,i,j,k,po=1,n;
    scanf("%d",&num);
    if(num==1)
    printf("%d",1);
    else {
        for(i=2;i<num;i++){
               if(num%(i*i*i)==0){
                    po=0;
                    break;
                    }
        }
        if(po==0)
            printf("Not Cube Free");
        else{
            for(n=1,i=2;i<=num;i++){
                for(k=0,j=2;j<=i;j++)
                    if(i%(j*j*j)==0)
                        k++;
                if(k==0)
                        n++;
        }
        printf("%d",n);
        }
    }
    }

#include<stdio.h>
int main(){
    int x,num,i,j,k,po=1,n;
    scanf("%d",&num);
if(num>=1&&num<=1000000){
        if(num==1)
    printf("%d",1);
    else {
        for(i=2;i<num;i++){
                x=i*i*i;
                   if(x>num)
                    break;
               if(num%x==0){
                    po=0;
                    break;
                    }
        }
        if(po==0)
            printf("Not Cube Free");
        else{
            for(n=1,i=2;i<=num;i++){
                for(k=0,j=2;j<=i;j++){
                    x=j*j*j;
                    if(x>num)
                    break;
                    if(i%x==0)
                        k++;
                        }
                if(k==0)
                        n++;
        }
        printf("%d",n);
        }
    }
    }

    }

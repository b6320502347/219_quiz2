#include<stdio.h>
int main(){
    int num,i,j,po=1;
    scanf("%d",&num);
    if(num==1)
    printf("%d",1);
    else {
        for(i=2;i<num;i++){
               if(num%(i*i*i)==0){
                    po=0;
                    break;
                    }
              else  po++;
        }
        if(po==0)
            printf("Not Cube Free");
        else printf("%d",po);
    }
    }

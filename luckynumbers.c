#include<stdio.h>
    int main(){
        int n,p,f,h,i,c,t=0;
        scanf("%d",&n);
        for(p=1;p<=n;p++){
            c=0;
            for(f=2;f<=p;f++){
                if(p%f==0){
                   h=0;
                   for(i=1;i<f;i++){
                       if(f%i==0){
                           h=h+1;
                       }
                   } 
                   if(h==1){
                       c=c+1;
                   }
                }
            }
            if(c>=3){
                t++;
                printf("%3d    %6d               \n",t,p);
            }
        }
        return 0;
    }

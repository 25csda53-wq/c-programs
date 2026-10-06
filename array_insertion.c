
#include<stdio.h>
int main(){
    int n,kt[50],i,pos,val;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&kt[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",kt[i]);
        
        }
        scanf("%d",&pos);
        scanf("%d",&val);
        
        for(i=n;i>pos;i--){
            kt[i]=kt[i-1];
        }
        
    
        
            kt[pos]=val;
            n++;
            
        
        
        for(i=0;i<n;i++){
        printf("%d",kt[i]);
        
        }
    return 0;
}

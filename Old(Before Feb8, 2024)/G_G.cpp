#include <stdio.h>
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int k=n;k>i;k--){
            printf("%d ",k);
        }
        for(int j=1;j<=(i*2-1);j++){
            printf("%d ",i);
        }
        for(int k=i+1;k<=n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }


    for(int i=2;i<=n;i++){
        for(int k=n;k>i;k--){
            printf("%d ",k);
        }
        for(int j=1;j<=(i*2-1);j++){
            printf("%d ",i);
        }
        for(int k=i+1;k<=n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;


// void solve(){
//     int n;
//     cin>>n;
//     int a[60000];
//     memset(a,0,sizeof(a));
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
//     int x;
//     for(int i=0;i<q;i++){
//         cin>>x;
//         int l = 0;
//         int r = n-1;
//         int f = 1;
//         int m;
//         while(l<=r){
//             m = (l+r)/2;
//             if(a[m]==x){
//                 f = 0;
//                 break;
//             }
//             else if(a[m]>x){
//                 r = m - 1;
//             }
//             else if(a[m]<x){
//                 l = m + 1;
//             }
//         }

//         //if middle element er sathe mile gele
//         if(!f){
//             if(m==0){
//                 cout<<"X "<<a[m]<<endl;
//             }
//             else if(m>=n-1)cout<<a[m]<<" X"<<endl;
//             else cout<<a[m-1]<<" "<<a[m+1]<<endl;
//         }
//         //ar jodi na mile
//         else{
//             if(l==0){
//                 cout<<"X "<<a[l]<<endl;
//             }
//             else if(l>=n)cout<<a[r]<<" X"<<endl;
//             else cout<<a[r]<<" "<<a[l]<<endl;
//         }


//     }

    
// }


// int main(){

//     int t=1;
//     //cin >> t;
//     while(t--)solve(); 
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;





int lowers(int ar[], int x){
    
    int l = -1;
    int n = sizeof(ar) / sizeof(ar[0]);
    int r = n;
    while(l+1<r){
        int mid = (l+r)/2;
        if(ar[mid]<=x){
            l = mid;
        }
        else{
            r = mid;            
        }
    }
    return l+1;
}



void solve(){
    int n;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int x;
    for(int i=0;i<q;i++){
        cin>>x;
        
        //int lpos = (lower_bound(a,a+n,x))-a;
        int lpos = lowers(a,x);
        int upos = (upper_bound(a,a+n,x))-a;
        
        cout<<lpos<<endl;

        if(lpos==0){
            //cout<<"X "<<a[upos]<<endl;
        }
        else if(n==upos){
            //cout<<a[lpos-1]<<" X"<<endl;
        }
       // else cout<<a[lpos-1]<<" "<<a[upos]<<endl;
        

        //if middle element er sathe mile gele
        // if(!f){
        //     if(m==0){
        //         cout<<"X "<<a[m]<<endl;
        //     }
        //     else if(m>=n-1)cout<<a[m]<<" X"<<endl;
        //     else cout<<a[m-1]<<" "<<a[m+1]<<endl;
        // }
        // //ar jodi na mile
        // else{
        //     if(l==0){
        //         cout<<"X "<<a[l]<<endl;
        //     }
        //     else if(l>=n)cout<<a[r]<<" X"<<endl;
        //     else cout<<a[r]<<" "<<a[l]<<endl;
        // }


    }

    
}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}
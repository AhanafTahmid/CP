#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
//Approach: If the number of inversion%2 is the same for both then yes

int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;      
    int right = mid + 1;   

    int cnt = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); 
            right++;
        }
    }


    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid); 
    cnt += mergeSort(arr, mid + 1, high); 
    cnt += merge(arr, low, mid, high);  
    return cnt;
}


void solve(){
    int n;cin>>n;
    vector<int>a(n), b(n);
    for(int &i: a)cin>>i;
    for(int &i: b)cin>>i;
    auto eq = [](vector<int>a, vector<int>b){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return a==b;
    };

    int ct = mergeSort(a, 0, n-1);
    int ct2 = mergeSort(b, 0, n-1);
    //cout<< ct << ' ' << ct2 <<endl;
    if(!eq(a,b) || ct%2!=ct2%2 )cout<<"NO"<<endl;
    else cout<<"YES" <<endl;
}

int32_t main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;
    cin >> t;
    while(t--)solve(); 
    return 0;
}
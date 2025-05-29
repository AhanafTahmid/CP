#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        vector<long long int> arr;
        for(long long int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                arr.push_back(i);
                if(i!=n/i) arr.push_back(n/i);
            }
            if( i >= 1e2) break;
        }
        sort(arr.begin(), arr.end());
        int cnt=1,mx=0;
        for(int i=0; i+1<arr.size(); i++)
        {
            if (arr[i+1] == arr[i] + 1)
            {
                cnt++;
            }
            else
            {
                mx = max(mx, cnt);
                cnt = 1;
            }
        }
        mx=max(mx,cnt);
        cout<<mx<<endl;
    }

    return 0;
}

// 12
// 1 2 3 4
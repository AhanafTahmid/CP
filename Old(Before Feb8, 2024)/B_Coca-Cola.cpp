#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b * c)
        {
            cout << "Case " << i << ": Yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": No" << endl;
        }
    }
    return 0;
}
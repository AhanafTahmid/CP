#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    cin.ignore(); 

    string s;
    unordered_set<string> st;
    for (i = 0; i < n; i++)
    {
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
    return 0;
}

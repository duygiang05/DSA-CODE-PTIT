#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int biendoi(int s, int t)
{
    int a[20001] = {0};
    queue<int> q; q.push(s);
    while(a[t] == 0)
    {
        int x= q.front(); q.pop();
        if(x-1 >0 && a[x-1] == 0  )
        {
            a[x-1] =a[x] +1; q.push(x-1);
        }
        if(x*2 < 20000 && a[x*2] == 0  )
        {
            a[x*2] = a[x] +1; q.push(x*2);
        } 
    } 
    return a[t];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--)
    {
        int s,t; cin>>s>>t;
        cout<<biendoi(s,t)<<endl;
    }
}
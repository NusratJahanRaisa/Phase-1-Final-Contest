#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x,n;
    cin>>x>>n;
    int sum=0, t=n;
    while (n--)
    {
        /* code */
        int pi;cin>>pi;
        sum+=pi;
    }

    int ans = (t+1)*x-sum;
    cout<<ans<<endl;
    return 0;
}
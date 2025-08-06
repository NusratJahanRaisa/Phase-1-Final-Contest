#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    cin>>x;

    int n;
    cin>>n;
    int sum=0;
    while (n--)
    {
        /* code */
        int pi;cin>>pi;

        if(pi<x)
        sum+=(x-pi);

        else if(pi>x)
        sum-=(pi-x);
    }

    cout<<sum+x<<endl;
    
    return 0;
}
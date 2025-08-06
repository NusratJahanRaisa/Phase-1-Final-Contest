#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}


int revNum(int n){

    int res = 0;
    while (n>0)
    {
        /* code */
        res*=10;
        // cout<<res<<" ";
        // dbg(res);
        res+=(n%10);
        // cout<<res<<" ";
        n/=10;
        // cout<<n<<" ";
    }
    // cout<<endl;
    return res;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
        int a,b; cin>>a>>b;

        int ra = revNum(a);
        int rb = revNum(b);

        int revS = ra+rb;
        int revSum = revNum(revS);

        cout<<revSum<<endl;
    }
    
    return 0;
}
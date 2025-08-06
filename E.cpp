#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

string s;

bool checkPalindrome(int l,int r){

    while(l<r){
        if(s[l]!=s[r]){
           return 0;
        }

        l++;r--;
    }

    return 1;
}



int main(){
    optimize();

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    cin>>s;

    int ans=1;

    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){

            if(checkPalindrome(i,j)==1) ans=max(ans, j-i+1);

        }
    }

    cout<<ans<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout<<"Sample input:"<<endl;
    int t;
    cin>>t;
    cin.ignore();
    

    // cout<<"Sample output:"<<endl;
    while (t--)
    {
        string a,b;
        cin>>a>>b;

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        int rev_a = stoi(a);
        int rev_b = stoi(b);

        long long sum = rev_a+rev_b;
        
        string sumS = to_string(sum);

        reverse(sumS.begin(),sumS.end());

        cout<<stoi(sumS)<<endl;
    }
    
    return 0;
}
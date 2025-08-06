#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[3][3];
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
        sort(a[i],a[i]+3);
    }

    int b[] = {a[0][1], a[1][1], a[2][1]};

    sort(b,b+3);

    cout<<b[1]<<endl;

    return 0;
}
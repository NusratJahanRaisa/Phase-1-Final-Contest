#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[3],b[3],c[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        cin>>c[i];
    }


    sort(a,a+3);
    sort(b,b+3);
    sort(c,c+3);
    
    int median[3] = { a[1], b[1], c[1] };

    sort(median,median+3);

    cout<<median[1]<<endl;

    return 0;
}
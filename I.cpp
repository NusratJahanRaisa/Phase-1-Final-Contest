#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    sort(arr+1,arr+1+n);
    arr[0] = 0;

    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int ans=0;

    for(int i=1;i<=n;i++){

       if(arr[i]!=arr[i-1]){
          ans++;
       }
    }
    
    cout<<ans<<endl;

    return 0;
}
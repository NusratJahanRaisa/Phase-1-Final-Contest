#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long aNum,bNum;
    cin>>aNum>>bNum;
    
    string a = to_string(aNum);
    string b = to_string(bNum);

    int f=0;
    long long cnt1=0,cnt2=0;
    
    // cout<<a.length()<< " " <<b.length()<<endl;
  
    if(a.length() > b.length()){
       for(long long i=b.length()-1;i>=0;i--){
         
        if(b[i]-48 + a[a.length()-1-cnt1]-48 >= 10) 
           f=1;

        cnt1++;
       }
    }else if(a.length() < b.length()){
       for(long long i=a.length()-1;i>=0;i--){
         
        if(b[b.length()-1-cnt2]-48 + a[i]-48 >= 10) {
           f=1;
        }   
        
        cnt2++;
      }
    }else{
       for(long long i=a.length()-1;i>=0;i--){
         
        if(b[i]-48 + a[i]-48 >= 10) {
           f=1;
        }          
      } 
    }
    

    if(f==1) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;

    // cout<<a[0]-48;


    return 0;
}
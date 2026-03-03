#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t;
while(t--){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mul=1;
    for(int i=0;i<n;i++){
        mul*=arr[i];
    }
    if(mul%67==0)cout<<"YES\n";
    else cout<<"NO\n";
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t;
while(t--){
    int n,s,x;
    cin>>n>>s>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum>s||(s-sum)%x!=0){
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
    }
}
return 0;
}

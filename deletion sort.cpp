#include<bits/stdc++.h>
using namespace std;
void solve(){
int n; cin>>n;
vector <int>a(n);
for(auto &i:a){
    cin>>i;
}
    if(is_sorted(a.begin(),a.end()))cout<<n<<'\n';//function for checking a array is sorted or not
    else cout<<"1"<<'\n';

}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t;
while(t--){
    solve();
}
return 0;
}

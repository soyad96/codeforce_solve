#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int n,c;
 cin>>n>>c; int sum=0;
 int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0;i<n;i++){
    sum+=a[i];
 }
 if(c>=sum){
    cout<<"YES"<<" "<<(c-sum)<<endl;
 }
 else {
    cout<<"NO"<<" "<<(sum-c)<<endl;
 }
return 0;
}

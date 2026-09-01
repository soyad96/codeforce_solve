#include<bits/stdc++.h>
using namespace std;
void ispalindrome(long long n){
string b="";
while(n>0){
	b+=(n%2)+'0';
	n/=2;
}
string rev=b;
reverse(rev.begin(),rev.end());
if(rev==b){
	cout<<"YES\n";
}
else {
	cout<<"NO\n";
}

}

void isodd(long long n){
	if(n%2==0){
		cout<<"NO\n";
	}
	else {
		ispalindrome(n);

	}


}


int main(){
	long long n; cin>>n;
	isodd(n);
	return 0;

}
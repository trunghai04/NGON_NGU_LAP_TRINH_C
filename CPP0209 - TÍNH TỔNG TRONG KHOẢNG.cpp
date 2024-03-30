#include<iostream>

using namespace std;

#define ll long long
int a[10000001];
int main(){
	int t;
	cin>> t;
	while (t--){
		int n,k,l,r;
		cin>> n>>k;
		for(int i=1;i<=n;i++){
			cin>> a[i];
		}
		while(k--){
		int sum=0;
		cin>> l>>r;
		for(int i=l;i<=r;i++)
			sum+=a[i];		
		cout << sum<<endl;
		}
	}	
	return 0;
}

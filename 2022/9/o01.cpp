#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[21],c[21]={1};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=c[i-1]*a[i];
	}
	for(int i=1;i<=n;i++){
		cout<<(m%c[i]-m%c[i-1])/c[i-1]<<" ";
	}
	return 0;
} 

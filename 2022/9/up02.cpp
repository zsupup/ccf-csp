//01�������� 
#include<iostream>
using namespace std;

int n,m,v,sum;
int f[300010];
int main(){
	//ͼ���������������� 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>v;
		sum+=v;
		for(int j=sum;j>=v;j--){
			f[j]=max(f[j],f[j-v]+v);
		}
	}
	for(int i=m;;i++){
		if(f[i]>=m){
			cout<<f[i];
			break;
		}
	} 
	return 0;
}

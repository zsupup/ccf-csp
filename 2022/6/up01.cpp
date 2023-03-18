#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,array[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	double sum = 0;
	for(int i=0;i<n;i++){
		sum+=array[i];
	}
	double average = sum /n;
	double variance =0;
	for(int i=0;i<n;i++){
		variance+=(array[i]-average)*(array[i]-average);
	}
	variance=sqrt(variance/n);
	for(int i=0;i<n;i++){
		cout<<(array[i]-average)/variance<<endl;
	}
	return 0;
} 

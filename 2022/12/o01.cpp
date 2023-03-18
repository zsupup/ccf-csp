#include<iostream>
#include<cmath>
using namespace std;

int n=0;
double i=0,total=0;
int value[1005]={0}; 
int main(){
	cin>>n>>i;
	for(int j=0;j<=n;j++){
		cin>>value[j];
		total += value[j] * pow(1+i, -j);
	}
	printf("%.3f",total);
	return 0;
}

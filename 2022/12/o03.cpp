#include<iostream>
#include<cmath>
using namespace std;
const long double pi=acos(-1);
//步骤三：读入数据顺序 
long long x[]={0,1,1,2,3,2,1,1,2,3,4,5,4,3,2,1,1,2,3,4,5,6,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,8,7,6,5,4,3,2,3,4,5,6,7,8,8,7,6,5,4,5,6,7,8,8,7,6,7,8,8};
long long y[]={0,1,2,1,1,2,3,4,3,2,1,1,2,3,4,5,6,5,4,3,2,1,1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,2,3,4,5,6,7,8,8,7,6,5,4,3,4,5,6,7,8,8,7,6,5,6,7,8,8,7,8};

long double zero[9][9];
long double one[9][9];
long long two[9][9];
long double t[9][9];

//量化矩阵 
long long n;
long long mode;
long double a(long long x){
	if(x==0) return sqrt(0.5);
	else return 1;
}

//DCT 
void set(long long x,long long y){
	long double ans=0;
	for(long long u=0;u<=7;u++){
		for(long long v=0;v<=7;v++){
			long double t1=cos(0.125*pi*(x+0.5)*u);
            long double t2=cos(0.125*pi*(y+0.5)*v);
			ans =ans+0.25*a(u)*a(v)*one[u][v]*t1*t2;
		}
	}
	ans=ans+128;
	long long tmp=ans;
	long double delta =ans-tmp;
	if(delta>=0.5){
		two[x][y]=tmp+1;
	}else{
		two[x][y]=tmp;
	}
	if(two[x][y]>255)
	two[x][y]=255;
	if(two[x][y]<0)
	two[x][y]=0;
}

//求解M'[i][j] 
int main(){
	for(long long i=0;i<8;i++)
	for(long long j=0;j<8;j++)
	cin>>t[i][j];
	cin>>n>>mode;
	for(long long i=1;i<=n;i++)
	cin>>zero[x[i]-1][y[i]-1];
	//读入原矩阵 
	for(long long i=0;i<8;i++)
	for(long long j=0;j<8;j++)
	one[i][j]=zero[i][j]*t[i][j];
	for(long long i=0;i<8;i++)
	for(long long j=0;j<8;j++)
	set(i,j);
	if(mode==0){
		for(long long i=0;i<8;i++){
			for(long long j=0;j<8;j++){
				cout<<zero[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else if(mode ==1){
		for(long long i=0;i<8;i++){
			for(long long j=0;j<8;j++){
				cout<<one[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else if(mode==2){
		for(long long i=0;i<8;i++){
			for(long long j=0;j<8;j++){
				cout<<two[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

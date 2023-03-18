//202104-1 灰度直方图
//#include<iostream>
//using namespace std;
//int main(){
//	int n,m,L,i,j,temp;
//	cin>>n>>m>>L;
//	int s[L];
//	for(i=0;i<L;i++) s[i]=0;
//	for(i=0;i<m;i++){
//		for(j=0;j<n;j++){
//			cin>>temp;
//			s[temp]++;
//		}
//	}
//	for(i=0;i<L;i++) cout<<s[i]<<' ';
//	return 0;
//}

//202104-2 邻域均值
//#include<iostream>
//using namespace std;
//int n,l,r,t,a[601][601],sum[601][601];
//int main(){
//	cin>>n>>l>>r>>t;
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			cin>>a[i][j];
//			
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++)
//			sum[i][j]=sum[i-1][j] + sum[i][j-1] -sum[i-1][j-1] + a[i][j];
//	
//	int res=0;
//	for(int i=1;i<=n;i++)
//		for(int j=1;j<=n;j++){
//			int max_i=min(n,i+r);
//			int max_j=min(n,j+r);
//			int min_i=max(0,i-r-1);
//			int min_j=max(0,j-r-1);
//			double tmp=double(sum[max_i][max_j] - sum[min_i][max_j] - sum[max_i][min_j] + sum[min_i][min_j]) / double ((max_i - min_i)*(max_j - min_j));
//			if(tmp<=t)
//				res++;
//		}
//	cout<<res;
//	return 0;
//}

//202112-1 序列查询
//#include<iostream>
//using namespace std;
//int main(){
//	int n,N;
//	cin>>n>>N;
//	int a[n+1];
//	for(int i=1;i<=n;i++) cin>>a[i];
//	long long res=0;
//	for(int i=0;i<=n;i++){
//		if(i==n) res+=(N-a[i])*i;
//		else res+=(a[i+1]-a[i])*i;
//	}
//	cout<<res;
//	return 0;
//}

//202112-2 序列查询新解
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n;
//	long long N;
//	cin>>n>>N;
//	long long a[n+10];
//	a[0]=0;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	a[n+1]=N;
//	long long res=0;
//	long long r=N/(n+1);
//	for(int i=0;i<=n;i++){
//		long long res1=0,res2=0;
//		for(long long j=a[i];j<a[i+1];){
//			long long num=j/r;
//			long long cnt=r-j%r;
//			cnt=min(cnt,a[i+1]-j);
//			res1=cnt*i;
//			res2=cnt*num;
//			res+=abs(res1-res2);
//			j+=cnt;
//		}
//	}
//	cout<<res;
//	return 0;
//}




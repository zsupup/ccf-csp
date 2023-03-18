//202203-1 未初始化警告
//#include<iostream>
//using namespace std;
//bool a[100010];
//int n,k;
//int main(){
//	cin>>n>>k;
//	a[0]=1;
//	int res=0;
//	while(k--){
//		int x,y;
//		cin>>x>>y;
//		if(!a[y]) res++;
//		a[x]=1;
//	} 
//	cout<<res;
//	return 0;
//}

//202203-2 出行计划
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int res[200010];
//int main(){
//	int n,m,k;
//	cin>>n>>m>>k;
//	for(int i=0;i<n;i++){
//		int t,c;
//		cin>>t>>c;
//		
//		int l=max(t-k-c+1,0);
//		l=min(l,200000);
//		int r=max(0,t-k);
//		r=min(r,200000);
//		
//		res[l]+=1;
//		res[r+1]-=1;
//	}
//	for(int i=1;i<200001;i++){
//		res[i]+=res[i-1];
//	}
//	for(int i=0;i<m;i++){
//		int q;
//		cin>>q;
//		cout<<res[q]<<endl;
//	}
//	return 0;
//}

//202206-1 归一化处理
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int a[1010];
//	double sum=0;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	double avg=sum/n;
//	double t=0;
//	for(int i=0;i<n;i++){
//		t+=(a[i]-avg) * (a[i]-avg);
//	}
//	t/=n;
//	t=sqrt(t);
//	double res=0;
//	for(int i=0;i<n;i++){
//		res=(a[i]-avg)/t;
//		cout<<res<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int a[1010];
//	double sum=0,d=0,ans=0;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	double avg=sum/n;
//	for(int i=0;i<n;i++) d+=(a[i]-avg)*(a[i]-avg);
//	d/=n;
//	d=sqrt(d);
//	for(int i=0;i<n;i++){
//		ans=(a[i]-avg)/d;
//		cout<<ans<<endl;
//	}
//	return 0;
//	
//} 


//202206-2 寻宝！大冒险！
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//typedef pair<int,int> PII;
//vector<PII> v;
//int m[60][60];
//int n,L,S;
//bool check(int x,int y){
//	for(int i=S;i>=0;i++){
//		for(int j=0;j<=S;j++){
//			int cx=S-i;
//			int cy=j;
//			if(x+cx<0 || x+cx>L || y+cy<0 || y+cy>L) return false;
//			bool flag=0;
//			for(auto t:v){
//				if(x+cx==t.first && y+cy==t.second){
//					flag=1;
//					break;
//				}
//			}
//			if((m[i][j] && !flag) || (!m[i][j]&& flag)) return 0;
//		}
//	}
//	return true;
//} 
//
//int main(){
//	cin>>n>>L>>S;
//	memset(m,0,sizeof(m));
//	for(int i=0;i<n;i++){
//		int x,y;
//		cin>>x>>y;
//		v.push_back({x,y});
//	}
//	for(int i=0;i<=S;i++){
//		for(int j=0;j<=S;j++){
//			cin>>m[i][j];
//		}
//	}
//	int res=0;
//	for(int i=0;i<n;i++){
//		if(check(v[i].first,v[i].second)){
//			res++;
//		}
//	}
//	cout<<res;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//int main(){
//	int n,l,s;
//	cin>>n>>l>>s;
//	int A[n][2];
//	int B[s+1][s+1];
//	for(int i=0;i<n;i++){
//		cin>>A[i][0]>>A[i][1];
//	}
//	int num=0;
//	for(int i=s;i>=0;i--){
//		for(int j=0;j<=s;j++){
//			cin>>B[i][j];
//			if(B[i][j]==1){
//				num++;
//			}
//		}
//	}
//	int ans=0;
//	for(int i=0;i<n;i++){
//		int p=A[i][0],q=A[i][1];
//		bool flag=true;
//		int temp=0;
//		for(int j=0;j<n;j++){
//			if(A[j][0]-p>=0 && A[j][0]-p<=s && A[j][1]-q>=0 && A[j][1]-q<=s){
//				temp++;
//			}
//		}
//		if(temp==num){
//			for(int m=0;m<s+1;m++){
//				if(p+j > 1||q+m >1){ 
//					flag=false;
//					break;
//				}
//				if(B[j][m]==0){
//					for(int k=0;k<n;k++){
//						if(A[k][0]==p+j && A[k][1]==q+m){
//							flag=false;
//							break;
//						}
//					}
//				}else{
//					for(int k=0;k<n;k++){
//						if(A[k][0]==p+j && A[k][1]==q+m)
//						break;
//						if(k==n-1){
//							flag=false;
//						} 
//					}
//				}
//			}
//		}
//	}
//	if(flag){
//		ans++;
//	}
//	cout<<ans;
//}

//202209-1 如此编码
//#include<iostream>
//using namespace std;
//const int N=25;
//int a[N],c[N],b[N];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	c[0]=1;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		c[i]=c[i-1]*a[i];
//	}
//	for(int i=1;i<=n;i++){
//		b[i]=m%c[i];
//	}
//	for(int i=n;i>=1;i--){
//		b[i]-=b[i-1];
//		b[i]=b[i]/c[i-1];
//	}
//	for(int i=1;i<=n;i++){
//		cout<<b[i]<<' ';
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int N=25;
//int a[N],b[N],c[N];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	c[0]=1;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		c[i]=c[i-1]*a[i];
//	}
//	for(int i=1;i<=n;i++){
//		b[i]=m%c[i];
//	}
//	for(int i=n;i>=1;i--){
//		b[i]-=b[i-1];
//		b[i]=b[i]/c[i-1];
//	}
//	for(int i=1;i<=n;i++){
//		cout<<b[i]<<' ';
//	}
//	return 0;
//} 


//
////202209-2 何以包邮
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=35,M=3e5+10;
//int f[N][M];
//int a[N];
//int main(){
//	int n,x;
//	cin>>n>>x;
//	int sum=0;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		sum+=a[i];
//	}
//	int res=0;
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<=sum-x;j++){
//			f[i][j]=f[i-1][j];
//			if(j>=a[i]) f[i][j]=max(f[i][j],f[i-1][j-a[i]]+a[i]);
//			res=max(res,f[i][j]);
//		}
//	}
//	cout<<sum-res;
//	return 0;
//}

//202212-1 现值计算
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main(){
//	double i;
//	int n;
//	double sum=0;
//	cin>>n>>i;
//	for(int idx=0;idx<=n;idx++){
//		int x;
//		cin>>x;
//		sum+=x*pow((1+i),-idx);
//	}
//	printf("%.3f",sum);
//}

//#include<iostream>
////#include<algorithm>
//#include<cmath>
//using namespace std;
//int main(){
////	int n,i;
//	int n;
//	double i;
//	cin>>n>>i;
////	int sum=0;
//	double sum=0;
//	for(int j=0;j<=n;j++){
//		int x;
//		cin>>x;
//		sum+=x*pow((1+i), -j);
//	}
////	cout<<sum<<endl;
//	printf("%.3f",sum);
//	return 0;
//	
//} 

////202212-2 训练计划
//#include<iostream>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	int p[m+1];
//	int t[m+1];
//	for(int i=1;i<=m;i++){
//		cin>>p[i];
//	}
//	for(int i=1;i<=m;i++){
//		cin>>t[i];
//	}
//	int early[m+1];
//	int last[m+1];
//	for(int i=1;i<=m;i++){
//		if(p[i]==0){
//			early[i]=1;
//			last[i]=n-t[i];
//		}else{
//			early[i]=early[p[i]]+t[p[i]];
//			last[i]=n-last[p[i]-t[i]];
//		}
//	}
//	for(int i=1;i<=m;i++){
//		cout<<early[i]<<' ';
//	}
//	cout<<endl;
//	int min=1;
//	for(int i=1;i<=m;i++){
//		if(last[i]<min)
//			min=last[i];
//	}
//	if(min>0){
//		for(int i=1;i<=m;i++){
//			cout<<last[i]<<' '<<endl;
//		}
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	int p[m+1],t[m+1];
//	for(int i=1;i<=m;i++) cin>>p[i];
//	for(int i=1;i<=m;i++) cin>>t[i];
//	int early[m+1],last[m+1];
//	for(int i=1;i<=m;i++){
//		if(p[i]==0){
//			early[i]=1;
//			last[i]=n-t[i];
//		}else{
//			early[i]=early[p[i]]+t[p[i]];
//			last[i]=n-last[p[i]-t[i]];
//		}
//	}
//	for(int i=1;i<=m;i++) cout<<early[i]<<' ';
//	cout<<endl;
//	int min=1;
//	for(int i=1;i<=m;i++){
//		if(last[i]<min)
//			min=last[i]; 
//	}
//	if(min>0){
//		for(int i=1;i<=m;i++){
//			cout<<last[i]<<' ';
//		}
//	}
//	return 0;
//} 


//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=500;
//int n,m,len;
//int p[N],back[N],t[N];
//int first[N],last[N];
//int main(){
//	cin>>n>>m;
//	for(int i=1;i<=m;i++){
//		cin>>p[i];
//		back[p[i]]=i;
//	}
//	for(int i=1;i<=m;i++){
//		cin>>t[i];
//	}
//	for(int i=1;i<=m;i++){
//		if(!p[i]){
//			first[i]=1;
//		}else{
//			first[i]=first[p[i]]+t[p[i]];
//		}
//		len=max(len,first[i]+t[i]-1);
//	}
//	for(int i=1;i<=m;i++){
//		cout<<first[i]<<' ';
//	}
//	if(len<=n){
//		cout<<endl;
//		for(int i=m;i>=1;i--){
//			if(!back[i]){
//				last[i]=n-t[i]+1;
//			}
//			if(p[i]){
//				last[p[i]]=min(last[p[i]],last[i]-t[p[i]]);
//			}
//		}
//		for(int i=1;i<=m;i++){
//			cout<<last[i]<<' ';
//		}
//	}
//	return 0;
//}


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int N = 500;

int n, m, len;
vector<int> p(N), back(N), t(N), first(N), last(N);

int main() {
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> p[i];
        back[p[i]] = i;
    }

    for (int i = 1; i <= m; i++) {
        cin >> t[i];
    }

    for (int i = 1; i <= m; i++) {
        if (!p[i]) {
            first[i] = 1;
            last[i] = n - t[i] + 1;
        } else {
            first[i] = first[p[i]] + t[p[i]];
            last[p[i]] = min(last[p[i]], last[i] - t[p[i]]);
        }
        len = max(len, first[i] + t[i] - 1);
    }

    for (int i = 1; i <= m; i++) {
        cout << first[i] << " ";
    }

    if (len <= n) {
        cout << endl;
        for (int i = 1; i <= m; i++) {
            cout << last[i] << " ";
        }
    }

    return 0;
}


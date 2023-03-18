//2013-12-1 出现次数最多的数
//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    int a[1024];
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    int b[10010]={0};
//    //数组下标存这个数，数组值存这个数出现的次数 
//    for(int i=1;i<=n;i++){
//        int b_i=a[i];
//        b[b_i]++;
//    }
//    //默认是0次 
//    int max=0;
//    int ans;
//    for(int i=1;i<10010;i++){
//    	//大于保证了输出的是最多并且是最多中的最小的 
//        if(b[i]>max&&b[i]!=0){
//           max=b[i];
//           ans=i;
//        }
//    }
//    cout<<ans<<endl;
//    return 0;
//}

//2013-12-1 出现次数最多的数
//#include<iostream>
//using namespace std;
//int a[10010];
//int main(){
//    int n;
//    cin>>n;
//    int x;
//    for(int i=0;i<n;i++){
//        cin>>x;
//        a[x]++;
//    }
//    int res,max=0;
//    for(int i=0;i<10010;i++){
//        if(a[i]>max && a[i]!=0){
//           max=a[i];
//           res=i;
//        }
//    }
//    cout<<res;
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//pair<int, int > A[10010];
//int n;
//
//bool cmp1(pair<int, int> a, pair<int, int> b) {
//	return a.first < b.first;
//}
//
//bool cmp2(pair<int, int> a, pair<int, int> b) {
//	return a.second > b.second;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		A[tmp].first = tmp;
//		A[tmp].second++;
//	}
//	sort(A, A + 10010, cmp2);
//	int cnt = 0, tmp = A[0].second;
//	while (tmp == A[cnt++].second);
//	sort(A, A + cnt - 1, cmp1);
//	cout << A[0].first << endl;
//
//	return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//pair<int,int> A[10010];
//int n;
//
////按second从大到小排序 
//bool cmpd(pair<int,int> a,pair<int,int> b){
//     return a.second>b.second;
//}
//bool cmpu(pair<int,int> a,pair<int,int> b){
//     return a.first<b.first;
//}
//int main(){
//    cin>>n;
//    for(int i=0;i<n;i++){
//        int temp;
//        cin>>temp;
//        A[temp].first=temp;
//        A[temp].second++;
//    }
//    sort(A,A+10010,cmpd);
//    int cnt=0,temp=A[0].second;
//    while(temp==A[cnt++].second);
//    sort(A,A+cnt-1,cmpu);
//    cout<<A[0].first;
//    return 0;
//
//}


 
////	201312-2 ISBN号码
//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	string s;
//	cin>>s;
//	int sum=0,j=1;
//	for(int i=0;i<(int)s.length()-1;i++){
//		if(s[i]!='-')
//			sum+=(s[i]-'0')*j++;
//	}
//	char c;
//	c=sum%11;
//	if(c==10)
//		c='X';
//	else 
//		c=c+'0';
//	if(c==s[s.length()-1])
//		cout<<"Right"<<endl;
//	else{
//		s[s.length()-1]=c;
//		cout<<s<<endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//    string s;
//    cin>>s;
//    int i=0,j=1,sum=0;
//    for(i=0;i<(int)s.length()-1;i++){
//        if(s[i]!='-')
//           sum+=(s[i]-'0')*j++;
//    }
//    char t;
//    t=sum%11;
//    if(t==10) t='X';
//    else t+='0';
//    if(t==s[s.length()-1]) cout<<"Right"<<endl;
//    else{
//        s[s.length()-1]=t;
//        cout<<s<<endl;
//	}
//    return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//string s;
//int main(){
//	cin>>s;
//	int sum=0,j=1;
//	for(int i=0;i<s.length()-1;i++){
//		if(s[i]!='-')
//			sum+=(s[i]-'0')*j++;
//	}
//	char c=sum%11;
//	if(c==10){
//		c='X';
//	}else{
//		c+='0';
//	}
//	if(c==s[s.length()-1]){
//		cout<<"Right"<<endl; 
//	}else{
//		s[s.length()-1]=c;
//		cout<<s<<endl;
//	}
//	return 0;
//} 


//
//2013-12-3 最大的矩形
//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//int h[1010];
//int main(){
//	int num,temp,wide;
//	int ans=0;
//	cin>>num;
//	for(int i=0;i<num;i++){
//		cin>>h[i];
//	}
//	h[num]=0;
//	stack<int> st;
//	for(int i=0;i<=num;i++){
//		if(st.empty() || (h[st.top()]<h[i]))
//			st.push(i);
//		else if(h[st.top()]>h[i]){
//			while(!st.empty()&&(h[st.top()]>=h[i])){
//				temp=st.top();
//				st.pop();
//				wide=st.empty()?i:i-st.top()-1;
//				ans=max(ans,h[temp]*wide);
//			}
//			st.push(i);
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int H[2010];
//int n;
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>H[i];
//	}
//	int Max=0,S=0;
//	for(int i=0;i<n;i++){
//		int L=0,R=0;
//		for(int j=i;j>=0;j--){
//			if(H[j]>=H[i]) L++;
//			else break;
//		}
//		for(int j=i;j<n;j++){
//			if(H[j]>=H[i]) R++;
//			else break;
//		}
//		int W=L+R-1;
//		S=H[i]*W;
//		if(S>Max) Max=S;
//	}
//	cout<<Max<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int H[2010];
//int n;
//int main(){
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>H[i];
//    }
//    int Max=0,S=0;
//    for(int i=0;i<n;i++){
//        int L=0,R=0;
//        for(int j=i;j>=0;j--){
//            if(H[j]>=H[i]) L++;
//            else break;
//        }
//        for(int j=i;j<=n;j++){
//            if(H[j]>=H[i]) R++;
//            else break;
//        }
//        int W=L+R-1;
//        S=H[i]*W;
//        if(S>Max) Max=S;
//    }
//    cout<<Max<<endl;
//    return 0;
//}

//2013-12-3 最大的矩形
//#include<iostream>
//#include<stack>
//#include<algorithm>
//using namespace std;
//int H[2010];
//int n;
//
//int main(){
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>H[i];
//	}
//	H[n]=0;
//	long long Max=0;
//	stack<int> S;
//	for(int i=0;i<=n;i++){
//		if(S.empty() || H[i]>=H[S.top()]){
//			S.push(i);
//		}else{
//			while(H[i]<H[S.top()]){
//				int top=S.top();
//				S.pop();
//				if(!S.empty()){
//					Max=max(Max,(long long)H[top]*(i-S.top()-1));
//				}else{
//					Max=max(Max,(long long)H[top]*i);
//					break;
//				}
//			}
//			S.push(i);
//		}
//	}
//	cout<<Max<<endl;
//	return 0;
//}

//#include<iostream>
//#include<algorithm> 
//#include<stack>
//using namespace std;
//int H[2010];
//int main(){
//	int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>H[i];
//    }
//    H[n]=0;
//    long long MAX=0;
////    <stack> s;
//	stack<int> s;
//    for(int i=0;i<=n;i++){
//        if(s.empty()||H[i]>=H[s.top()]){
//           s.push(i);
//        }else{
//              while(H[i]<H[s.top()]){
//                    int temp=s.top();
//                    s.pop();
//                    if(!s.empty()){
//                       MAX=max(MAX,(long long)H[temp]*(i-s.top()-1));
//                    }else{
//                          MAX=max(MAX,(long long)H[temp]*i);
//                          break;
//                    }
//              }
//              s.push(i);
//        }
//    }
//    cout<<MAX<<endl;
//    return 0;
//    
//}

//201312-4 有趣的数
//#include<iostream>
//using namespace std;
//const int mod=1000000007;
//typedef long long ll;
//int main(){
//	int n;
//	cin>>n;
////	s[i][j]表示填了j位，最后一位是数字i的有趣数的个数
//	ll s[6][1001]={0};
//	for(int i=1;i<=n;i++){
//		s[0][i]=(2*s[0][i-1]+s[1][i-1]+s[2][i-1]) % mod;
//		s[1][i]=(2*s[1][i-1]+s[4][i-1]) % mod;
//		s[2][i]=(2*s[2][i-1]+s[4][i-1]+s[3][i-1]) %mod;
//		s[3][i]=(s[3][i-1]+s[5][i-1]) % mod;
//		s[4][i]=(2*s[4][i-1]+s[5][i-1]) % mod;
//		s[5][i]=1;
//	} 
//	cout<<s[0][n]<<endl;
//}

#include<iostream>
#include<cstring>
using namespace std;
const long long MOD=1000000007;
long long status[1001][6];
int main(){
	int n;
	cin>>n;
	memset(status,0,sizeof(status));
	status[1][0]=1;
	for(int i=2;i<=n;i++){
		status[i][0]=1;
		status[i][1]=(status[i-1][1]*2 + status[i-1][0]) % MOD;
		status[i][2]=(status[i-1][2] + status[i-1][0]) % MOD;
		status[i][3]=(status[i-1][3]*2 + status[i-1][1]) % MOD;
		status[i][4]=(status[i-1][4]*2 + status[i-1][1] + status[i-1][2]) % MOD;
		status[i][5]=(status[i-1][5]*2 + status[i-1][3] + status[i-1][4]) % MOD;
	}
	cout<<status[n][5]<<endl;
	return 0;
}
 


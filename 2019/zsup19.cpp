//201903-1 小中大
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int num[n];
//	for(int i=0;i<n;i++)
//		cin>>num[i];
//	sort(num,num+n,less<int>());
//	int mid;
//	if(n%2==0)
//		mid=num[n/2-1]+num[n/2];
//	else 
//		mid=num[n/2];
//	if(n%2!=0)
//		cout<<num[n-1]<<' '<<mid<<' '<<num[0];
//	else{
//		if(mid%2==0)
//			cout<<num[n-1]<<' '<<mid/2<<' '<<num[0];
//		else 
//			cout<<num[n-1]<<' '<<mid/2.0<<' '<<num[0];
//	}
//	return 0;
//}

//201903-2 二十四点
//#include<iostream>
//#include<stack>
//#include<cstring>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		stack<int> nums;
//		string str;
//		cin>>str;
//		int flag=1;
//		for(int j=0;j<str.size();j++){
//			if(str[j]>='0' && str[j]<='9'){
//				nums.push(flag*(str[j]-'0'));
//				flag=1;
//			}
//			else if(str[j]=='x'){
//				int a=nums.top();
//				nums.pop();
//				int b=str[++j]-'0';
//				nums.push(a*b);
//			}
//			else if(str[j]=='/'){
//				int a=nums.top();
//				nums.pop();
//				int b=str[++j]-'0';
//				nums.push(a/b);
//			}
//			else if(str[j]=='-'){
//				flag=-1;
//			}
//		}
//		int sum=0;
//		while(!nums.empty()){
//			sum+=nums.top();
//			nums.pop();
//		}
//		if(sum==24) cout<<"Yes"<<endl;
//		else cout<<"No"<<endl;
//	}
//	return 0;
//} 

//201909-1 小明种苹果
//#include<iostream>
//using namespace std;
//int main(){
//	int n,m,a0,a1;
//	cin>>n>>m;
//	long long sum=0;
//	int max_sg=0;
//	int max_id=0;
//	for(int i=0;i<n;i++){
//		cin>>a0;
//		sum+=a0;
//		int temp=0;
//		for(int j=0;j<m;j++){
//			cin>>a1;
//			temp-=a1;
//		}
//		sum-=temp;
//		if(temp>max_sg){
//			max_sg=temp;
//			max_id=i+1;
//		}
//	}
//	cout<<sum<<" "<<max_id<<" "<<max_sg;
//	return 0;
//} 

//201909-2 小明种苹果（续）
//#include<iostream>
//using namespace std;
//struct Tree{
//	long long num;
//	bool sg;
//}; 
//int main(){
//	int n,m;
//	cin>>n;
//	Tree tree[n];
//	for(int i=0;i<n;i++){
//		tree[i].num =0;
//		tree[i].sg=0;
//	}
//	for(int i=0;i<n;i++){
//		cin>>m;
//		long long a;
//		for(int j=0;j<m;j++){
//			cin>>a;
//			if(j==0) tree[i].num =a;
//			else{
//				if(a<=0) tree[i].num+=a;
//				else{
//					if(tree[i].num>a) tree[i].sg=1;
//					tree[i].num=a;
//				}
//			}
//		}
//	}
//	long long sum=0;
//	int sg_count=0;
//	int sg_3=0;
//	for(int i=0;i<n;i++){
//		sum+=tree[i].num;
//		if(tree[i].sg ) sg_count++;
//		if(tree[i].sg&&tree[(i+1)%n].sg&&tree[(i+2)%n].sg) sg_3++;
//	}
//	cout<<sum<<" "<<sg_count<<" "<<sg_3;
//	return 0;
//}

//201912-1 报数
//#include<iostream>
//using namespace std;
//bool seven(int x){
//	while(x){
//		if(x%10==7) return 1;
//		x/=10;
//	}
//	return 0;
//} 
//int main(){
//	int n;
//	cin>>n;
//	int step=0;
//	int num[4]={0};
//	int i=0;
//	while(step<n){
//		int index=i+1;
//		if(index%7==0 || seven(index)){
//			num[i%4]++;
//			i++;
//		}
//		else{
//			step++;
//			i++;
//		}
//	}
//	for(int j=0;j<4;j++){
//		cout<<num[j]<<endl;
//	}
//	return 0;
//}

//201912-2 回收站选址
#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;
pair<int,int> p[1000];
int cnt[5];
int main(){
	int n;
	map<pair<int,int>,int> ps;
	cin>>n;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		p[i]=make_pair(x,y);
		ps[p[i]]=1;
	} 
	memset(cnt,0,sizeof(cnt));
	for(int i=0;i<n;i++){
		int x=p[i].first;
		int y=p[i].second;
		if(ps[make_pair(x,y-1)] && ps[make_pair(x,y+1)] && ps[make_pair(x-1,y)] && ps[make_pair(x+1,y)])
			cnt[ps[make_pair(x+1,y+1)]+ps[make_pair(x+1,y-1)]+ps[make_pair(x-1,y+1)]+ps[make_pair(x-1,y-1)]]++;
	}
	for(int i=0;i<=4;i++){
		cout<<cnt[i]<<endl;
	}
	return 0;
}


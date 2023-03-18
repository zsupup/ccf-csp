//202006-1 线性分类器
//#include<iostream>
//using namespace std;
//const int N=1010;
//int x[N];
//int y[N];
//bool type[N];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		char c;
//		cin>>x[i]>>y[i]>>c;
//		if(c=='A') type[i]=1;
//	}
//	while(m--){
//		int k1,k2,k3;
//		cin>>k1>>k2>>k3;
//		bool f1=0,f2=0,f3=0,f4=0;
//		for(int i=0;i<n;i++){
//			if(k1+k2*x[i]+k3*y[i]>0){
//				if(type[i]) f1=true;
//				else f2=1;
//			}else{
//				if(type[i]) f3=1;
//				else f4=1;
//			}
//		}
//		if((f1&&f2) || (f3&&f4)) cout<<"No"<<endl;
//		else cout<<"Yes"<<endl;
//	}
//	return 0;
//} 

//202006-2 稀疏向量
//#include<iostream>
//using namespace std;
//struct Node{
//	long long index;
//	long long value;
//};
//int main(){
//	long long n,a,b;
//	cin>>n>>a>>b;
//	Node A[a],B[b];
//	for(int i=0;i<a;i++){
//		cin>>A[i].index>>A[i].value;
//	}
//	for(int i=0;i<b;i++){
//		cin>>B[i].index>>B[i].value;
//	}
//	long long sum=0;
//	long long i=0,j=0;
//	while(i<a && j<b){
//		if(A[i].index == B[j].index ){
//			sum += A[i].value * B[j].value;
//			i++;
//			j++;
//		}else if(A[i].index < B[j].index ){
//			i++;
//		}else{
//			j++;
//		}
//	}
//	cout<<sum<<endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n,a,b;
//	cin>>n>>a>>b;
//	vector < pair<int,int> > u,v;
//	int index,value;
//	for(int i=0;i<a+b;i++)
//	{
//		cin>>index>>value;
//		if(i<a)
//			u.push_back({index,value});
//		else
//			v.push_back({index,value});
//	}
//	long long int res=0;
//	int i=0,j=0;
//	while(i<a&&j<b)
//	{
//		if(u[i].first==v[j].first)
//		{
//			res+=u[i].second*v[j].second;
//			i++;
//			j++;
//		}
//		else if(u[i].first<v[j].first)
//			i++;
//		else
//			j++;
//	}
//	cout<<res;
//	return 0;
//}

//202009-1 称检测点查询
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node{
//	int distance;
//	int id;
//};
//bool cmp(node n1,node n2){
//	if(n1.distance == n2.distance ) return n1.id < n2.id;
//	return n1.distance < n2.distance ;
//}
//int main(){
//	int n,x,y;
//	cin>>n>>x>>y;
//	node point[n];
//	for(int i=0;i<n;i++){
//		int point_x,point_y;
//		cin>>point_x>>point_y;
//		point[i].distance = (point_x-x)*(point_x-x) + (point_y-y)*(point_y-y);
//		point[i].id=i+1;
//	}
//	sort(point,point+n,cmp);
//	for(int i=0;i<3;i++)
//		cout<<point[i].id<<endl;
//	return 0;
//}

//202009-2 风险人群筛查 
//#include<iostream>
//using namespace std;
//int main(){
//	int n,k,t,x1,y1,x2,y2;
//	cin>>n>>k>>t>>x1>>y1>>x2>>y2;
//	int x,y,h,r1,r2,a=0,b=0;
//	for(int i=0;i<n;i++){
//		r1=0,r2=0;
//		h=0;
//		for(int j=0;j<t;j++){
//			cin>>x>>y;
//			if(x1<=x && x<=x2 && y1<=y && y<= y2){
//				h++;
//				r1=1;
//				if(h>=k)
//					r2=1;
//			}
//			else 
//				h=0;
//				
//			if(j==t-1){
//				if(r1)
//					a++;
//				if(r2)
//					b++;
//			}
//		}
//	}
//	cout<<a<<endl<<b<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;

int main(){
	int n,k,t,xl,yd,xr,yu;
	cin>>n>>k>>t>>xl>>yd>>xr>>yu;
	int pass = 0, stop = 0;//通过的个数 逗留的个数
	for(int i=0,x,y;i<n;++i){//循环这n个人
		int countK = 0,maxCountK = 0;//当前连续在风险区域的时间片个数countK  连续最高时间片maxCountK 
		for(int j=0;j<t;++j){//循环这个人的t个时间片
			cin>>x>>y;
			countK = (x<xl||x>xr||y<yd||y>yu)?0:(countK+1);//如果TA在当前时间片j在风险区域中则自增countK否则置countK=0
			if(countK>maxCountK) maxCountK = countK;//更新连续最高时间片
		}
		if(maxCountK>0){//经过
			++pass;
		}
		if(maxCountK>=k){//逗留
			++stop;
			continue;
		}
	}
	cout<<pass<<endl<<stop;
	return 0;
}



//202012-1 期末预测之安全指数
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int w,score,sum=0;
//	for(int i=0;i<n;i++){
//		cin>>w>>score;
//		sum+=w*score;
//	}
//	if(sum>0) cout<<sum<<endl;
//	else cout<<0<<endl;
//	return 0;
//}

//202012-2 期末预测之最佳阈值
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Stu{
//	int y;
//	int result;
//};
//bool cmp(Stu s1,Stu s2){
//	return s1.y < s2.y;
//}
//int main(){
//	Stu stu[100005];
//	int count_0[100005]={0};
//	int count_1[100005]={0};
//	int m;
//	cin>>m;
//	for(int i=0;i<m;i++){
//		cin>>stu[i].y>>stu[i].result;
//	}
//	sort(stu,stu+m,cmp);
//	int i=0,j=1;
//	int coing_0=0,coing_1=0;
//	while(j<m){
//		if(stu[j].y==stu[i].y){
//			j++;
//			continue;
//		}
//		int temp=0;
//		while(i<j){
//			if(stu[i].result==0) temp++;
//			count_0[i]=coing_0;
//			i++;
//		}
//		coing_0+=temp;
//	}
//	while(i<j){
//		count_0[i]=coing_0;
//		i++;
//	}
//	for(int i=m-1;i>=0;i--){
//		if(stu[i].result==1) coing_1++;
//		count_1[i]=coing_1;
//	}
//	int ans=stu[0].y;
//	int num=count_0[0]+count_1[0];
//	for(int i=1;i<m;i++){
//		if(count_0[i]+count_1[i] >= num){
//			num=count_0[i]+count_1[i];
//			ans=stu[i].y;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}



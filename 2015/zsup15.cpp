//201503-1 ͼ����ת
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int m,n;
//int a[1005][1005];
//int main(){
//	cin>>m>>n;
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i=n-1;i>=0;i--){
//		for(int j=0;j<m;j++){
//			cout<<a[j][i]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int a[1005][1005];
//int main(){
//	//n������m����
//    int n,m;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            cin>>a[i][j];
//        }
//    }
////    ��ʱ��90����ת֮�����л���
//    for(int i=m-1;i>=0;i--){
//        for(int j=0;j<n;j++){
//            cout<<a[j][i]<<" ";
//        }//һ��
//    cout<<endl;
//    }
//    return 0;
//}

//#include<iostream>
//using namespace std;
//int a[1005][1005];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i=m-1;i>=0;i--){
//		for(int j=0;j<n;j++){
//			cout<<a[j][i]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//201503-2 ��������
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int a[1005];
//struct data{
//	int n;
//	int c;
//	bool operator<(const data& t) const{
//		if(c!=t.c) return c>t.c;
//		else return n<t.n;
//	}
//}s[1005];
//int main(){
//	int n;
//	cin>>n;
//	int x=0;
//	for(int i=0;i<n;i++){
//		cin>>x;
//		a[x]++;
//	}
//	int cnt=0;
//	for(int i=0;i<1005;i++){
//		if(a[i]){
//			s[cnt++]={i,a[i]};
//		}
//	}
//	sort(s,s+cnt);
//	for(int i=0;i<cnt;i++){
//		cout<<s[i].n<<" "<<s[i].c<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1005];
//struct data{
//  int n;
//  int c;
//  //���������
//  bool operator < (const data& t) const{
//       if(c!=t.c) return c>t.c;//c��ͬ����c�Ӵ�С���У�
//       else return n<t.n;//c��ͬ����n��С��������
//}
//}s[1005];
//int main(){
//   int n;
//   cin>>n;
//   int temp=0;
//   for(int i=0;i<n;i++){
//
//       cin>>temp;
//       a[temp]++;
//   }
//   int cnt=0;
//   for(int i=0;i<n;i++){
//       if(a[i]){
//          s[cnt++]={i,a[i]};
//       }
//   }
//   sort(s,s+cnt);
//   for(int i=0;i<cnt;i++){
//       cout<<s[i].n<<" "<<s[i].c<<endl;
//   }
//   return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1005];
//struct data{
//	int n;
//	int c;
//	bool operator < (const data& t) const{
//		if(c!=t.c) return c>t.c;
//		else return n<t.n;
//	}
//}s[1005];
//int main(){
//	int n,temp=0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>temp;
//		a[temp]++;
//	}
//	int cnt=0;
//	for(int i=0;i<1005;i++){
//		if(a[i])
//			s[cnt++]={i,a[i]};
//	}
//	sort(s,s+cnt);
//	for(int i=0;i<cnt;i++){
//		cout<<s[i].n<<" "<<s[i].c<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//int main(){
//  int n,temp=0;
//  map<int,int> mp;
//  cin>>n;
//  for(int i=0;i<n;i++){
//    cin>>temp;
//    mp[temp]++;
//  }
//  vector<pair<int,int>> v(mp.begin(), mp.end());
//  sort(v.begin(), v.end(), [](const pair<int,int>& x, const pair<int,int>& y){
//    if(x.second != y.second) return x.second > y.second;
//    else return x.first < y.first;
//  });
//
//  for(int i=0; i<v.size(); i++){
//    cout<<v[i].first<<" "<<v[i].second<<endl;
//  }
//  return 0;
//}

//201503-3 ����
//#include<iostream>
//using namespace std;
//int monthdays[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
//          			  {0,31,29,31,30,31,30,31,31,30,31,30,31}};
//int leapyear(int year){
//	return ((year%4==0 && year%100!= 0) || year%400 ==0) ? 1:0;
//}
//int main(){
//	int a,b,c,y1,y2,weeked,d,y;
//	cin>>a>>b>>c>>y1>>y2;
//	int days=0;
//	for(int i=1850;i<y1;i++){
//		days+=365+leapyear(i);
//	}
//	for(int i=y1;i<=y2;i++){
//		y=leapyear(i);
//		int days2=days;
//		for(int i=1;i<a;i++){
//			days2+=monthdays[y][i];
//		}
//		//1850��1��1�������ڶ�������days�������ڼ������㣺2+days%7�����ǵ�������ڣ� 1+days%7����ǰһ�������
//		weeked=1+days2%7;
//		//c+7����һ�ܣ�
//		d=(b-1)*7 + ((weeked>=c)?(c+7-weeked):(c-weeked));
//		if(d>monthdays[y][a])
//			cout<<"none"<<endl;
//		else{
//			cout<<i<<"/";
//			if(a<10)
//				cout<<"0";
//			cout<<a<<"/";
//			if(d<10)
//				cout<<"0";
//			cout<<d<<endl;
//		}
//		days+=365+leapyear(i);
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int M[2][13]= {{0,31,28,31,30,31,30,31,31,30,31,30,31},
//			   {0,31,29,31,30,31,30,31,31,30,31,30,31}};
//int leap(int year) {
//	if(year%400==0 || (year%4==0 && year%100!=0)) return 1;
//	else return 0;
//}
//int main() {
//	int a,b,c,y1,y2;
//	cin>>a>>b>>c>>y1>>y2;
//	int days_a=0;
//	for(int i=1850; i<y1; i++) {
//		days_a+=365+leap(i);
//	}
//	int weekday,leapyear,day_m;
//	for(int i=y1; i<=y2; i++) {
//		leapyear=leap(i);
//		int days_b=days_a;
//		for(int i=1; i<a; i++) {
//			days_b+=M[leapyear][i];
//		}
//		weekday=days_b%7+1;
//		day_m=(b-1)*7+((weekday>=c)?(c+7-weekday):(c-weekday));//weekday>c�Ǵ���� 
//		if(day_m>M[leapyear][a]) {
//			cout<<"none"<<endl;
//		} else {
//      			printf("%d/%02d/%02d\n", i, a, day_m);
//		}
//		days_a+=365+leap(i);
//	}
//	return 0;
//}




//201503-4 ������ʱ
//#include<iostream>
//#include<vector>
//#include<cstring>
//using namespace std;
////�����������������ڵ�now���������ľ��룬�����������d[]��
//void dfs(int now, int last, int d[],vector<int> tree[]){
//	int u,size;
//	size=tree[now].size();
//	for(int i=0;i<size;i++){
//		if((u=tree[now][i]) != last){
//			d[u]=d[now]+1;
//			dfs(u,now,d,tree);
//		}
//	}
//}
//
//int main(){
//	int n,m,t;
//	//�������ݣ����������ڽ�ͼ��
//	cin>>n>>m;
//	vector<int> tree[n+m+2];
//	int dist[n+m+2];
//	for(int i=2;i<=n;i++){
//		cin>>t;
//		tree[i].push_back(t);
//		tree[t].push_back(i);
//	}
//	for(int i=1;i<=m;i++){
//		cin>>t;
//		tree[n+i].push_back(t);
//		tree[t].push_back(n+i);
//	}
//	memset(dist,0,sizeof(dist));
//	dfs(1,0,dist,tree);
//	int start =0;
//	dist[start]=0;
//	for(int i=1;i<n+m+2;i++){
//		if(dist[i]>dist[start]){
//			start=i;
//		}
//	}
//	memset(dist,0,sizeof(dist));
//	dfs(start,0,dist,tree);
//	int target=0;
//	for(int i=1;i<n+m+2;i++){
//		if(dist[i]>dist[target]){
//			target=i;
//		}
//	}
//	cout<<dist[target]<<endl;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//#include<cstring>
//using namespace std;
//void dfs(int now,int last,int d[],vector<int> tree[]){
//	int u,size;
//	size=tree[now].size();
//	for(int i=0;i<size;i++){
//		if((u=tree[now][i])!=last){
//			d[u]=d[now]+1;
//			dfs(u,now,d,tree);
//		}
//	}
//}
//int main(){
//	int n,m,t;
//	cin>>n>>m;
//	vector<int> tree[n+m+2];
//	int dist[n+m+2];
//	for(int i=2;i<=n;i++){
//		cin>>t;
//		tree[i].push_back(t);
//		tree[t].push_back(i);
//	}
//	for(int i=1;i<=m;i++){
//		cin>>t;
//		tree[n+i].push_back(t);
//		tree[t].push_back(n+i);
//	}
//	memset(dist,0,sizeof(dist));
//	dfs(1,0,dist,tree);
//	int start=0;
//	dist[start]=0;
//	for(int i=1;i<n+m+2;i++){
//		if(dist[i]>dist[start]){
//			start=i;
//		}
//	}
//	memset(dist,0,sizeof(dist));
//	dfs(start,0,dist,tree);
//	int target=0;
//	for(int i=1;i<n+m+2;i++){
//		if(dist[i]>dist[target]){
//			target=i;
//		}
//	}
//	cout<<dist[target]<<endl;
//	return 0;
//}

//201503-4 ������ʱ
//#include<iostream>
//#include<vector>
//#include<cstring>
//using namespace std;
//void dfs(int now,int last,int d[],vector<int> tree[]){
//	int u,size;
//	size=tree[now].size();
//	//�±�i��0��ʼ�������Ǵ�1��ʼ��������Ϊvector�������±��Ǵ�0��ʼ�ģ����i��ȡֵ��ΧӦ����[0,size)������size�ǵ�ǰ�ڵ���ھӽڵ���Ŀ��
//	for(int i=0;i<size;i++){//i��㣬��0����1 
//		if((u=tree[now][i])!=last){
//			d[u]=d[now]+1;
//			dfs(u,now,d,tree);
//		}
//	}
//}
//int main(){
//	int n,m,t;//n�ǽ�����̨����m���ն˵��Ե�̨�� 
//	cin>>n>>m;
//	vector<int> tree[n+m+2];
//	int dist[n+m+2];
//	for(int i=2;i<=n;i++){
//		cin>>t;
//		tree[i].push_back(t);
//		tree[t].push_back(i);
//	}
//	for(int i=1;i<=m;i++){
//		cin>>t;
//		tree[n+i].push_back(t);
//		tree[t].push_back(n+i);
//	}
//	memset(dist,0,sizeof(dist));
//	dfs(1,0,dist,tree);
//	int start=0;
//	dist[start]=0;
//	for(int i=1;i<n+m+2;i++){//�߽�>����>= 
//		if(dist[i]>dist[start]){
//			start=i;
//		}
//	}
//	memset(dist,0,sizeof(dist));////�߽�>����>= 
//	dfs(start,0,dist,tree);
//	int target=0;
////	dist[target]=0;
//	for(int i=1;i<n+m+2;i++){
//		if(dist[i]>dist[target]){
//			target=i;
//		}
//	}
//	cout<<dist[target]<<endl;
//	return 0;
//}
//




//201509-1 ���зֶ�
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N=1005;
//int a[N];
//int main(){
//	int n;
//	cin>>n;
//	int res=1;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		if(i&&a[i]!=a[i-1]) res++;
//	}
//	cout<<res;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int a[1005];
//int main(){
//	int n;
//	cin>>n;
//	int ans=1;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++){
//		if(i && (a[i]!=a[i-1])){
//			ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//int a[1005];
//int n;
//int main(){
//  cin>>n;
////  int cnt=0;
//  int cnt=1;
//  for(int i=0;i<n;i++){
//      cin>>a[i];
//      if(i && a[i]!=a[i-1]){
//         cnt++;
//      }
//  }
//  cout<<cnt;
//  return 0;
//}


//201509-2 ���ڼ���
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int M[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//bool is_leap(int year){
//	return ((year%400==0)||(year%4==0&&year%100));
//}
//int main(){
//	int year,day;
//	cin>>year>>day;
//	int sum=0;
//	for(int i=0;i<12;i++){
//		int t=M[i+1];
//		if(i+1==2) t+=is_leap(year);
//		if(sum+t<day) sum+=t;
//		else{
//			cout<<i+1<<endl<<day-sum;
//			break;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int M[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},
//              {0,31,29,31,30,31,30,31,31,30,31,30,31}};
//bool leap(int year){
//	return ((year%4==0 && year%100!=0) || year%400==0 );
//}
//int main(){
//	int year,day,sum=0,m;
//	cin>>year>>day;
//	int y=leap(year);
//	for(int i=1;i<13;i++){
//		if((sum+M[y][i])>=day){
//			m=i;
//			break;
//		}else{
//			sum+=M[y][i];
//		}
//	}
//	cout<<m<<endl<<day-sum<<endl;
//	return 0;
//	
//}


//#include<iostream>
//using namespace std;
//int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//int isleaper(int year){
//    return (year%400==0 || (year%4==0 && year%100!=0));
//
//}
//int main(){
//   int year,day;
////   cin>>year>>endl>>day;
//   cin>>year>>day;
//   int sum=0;
//   for(int i=1;i<=12;i++){
//       int t=m[i];
//       if(i==2) t+=isleaper(year);
//       if(sum+t<day) sum+=t;
//       else{
//            cout<<i<<endl<<day-sum;
//            break;
//       }
//   }
//   return 0;
//}
//201509-3 ģ������ϵͳ 
//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//int main(){
//	int n,m;
//	vector<string> tv;
//	string key,value,temp;
//	map<string,string> dict;
//	int prev,next;
//	cin>>n>>m;
//	getchar();//������һ���ո�
//	for(int i=1;i<=n;i++){
//		getline(cin,temp);
//		//��tempÿ�������string����tv
//		tv.push_back(temp);
//	}
//	for(int i=1;i<=m;i++){
//		cin>>key;
//		getline(cin,value);
//		//��ȡ��2������ʼ��n���ַ���key��Ӧvalue
//		dict[key]=value.substr(2,value.length()-3);
//	}
//	//�滻��������
//	for(int i=0;i<n;i++){
//		//�滻
//		prev=0;
//		for(;;){
//			if((prev=tv[i].find("{{ ",prev)) == (int)string::npos)
//				break;
//			if((next=tv[i].find(" }}",prev)) == (int)string::npos)
//				break;
//			//��ȡ��prev+3������ʼ��next-prev-3���ַ�
//			key=tv[i].substr(prev+3,next-prev-3);//next-prev-3 ��name��λ��
//			//key���ִ�������0�����滻key����Ӧ��value
////			�ѵ�ǰ�ַ���������prev��ʼ��next-prev+3���ַ��滻Ϊ
//			tv[i].replace(prev,next-prev+3,dict.count(key)?dict[key]:"");
//			//ͬ������key���ִ��������������ظ��滻������key����ַ���������find
//			prev+=dict.count(key)?dict[key].length():0;
//		}
//		cout<<tv[i]<<endl;
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<map>
//#include<vector>
//using namespace std;
//int main(){
//	int m,n;
//	vector<string> tv;
//	string key,value,temp;
//	map<string,string> dict;
//	int prev,next;
//	cin>>m>>n;
//	getchar();
//	
//	for(int i=1;i<=m;i++){
//		getline(cin,temp);
//		tv.push_back(temp);
//	}
//	for(int i=1;i<=n;i++){
//		cin>>key;
//		getline(cin,value);
//		dict[key]=value.substr(2,value.length()-3);
//	}
//	for(int i=0;i<m;i++){
//		prev=0;
//		for(;;){
//			if((prev=tv[i].find("{{ ",prev)) == (int)string::nops)
//				break;
//			if((next=tv[i].find(" }}",prev)) == (int)string::nops)
//				break;
//			
//			key=tv[i].substr(prev+3,next-prev-3);
//			tv[i].replace(prev,next-prev+3,dict.count(key)?dict[key]:"");
//			prev+=dict.count(key)?dict[key].length():0;
//		}
//		cout<<tv[i]<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//int main(){
//	int m,n;
//	cin>>m>>n;
//	vector<string> tv;
//	string key,value,temp;
//	map<string,string> dict;
//	int prev,next;
//	getchar();
//	
//	for(int i=1;i<=m;i++){
//		getline(cin,temp);
//		tv.push_back(temp);
//	}
//	for(int i=1;i<=n;i++){
//		cin>>key;//name
//		getline(cin,value);//"David Beckham"
////		dict[key].push_back(value);
//		//��"David Beckham"�У��ӵ�2���ַ�D��ʼ����ȡvalue.length()-3 ���ַ� 
//		dict[key]=value.substr(2,value.length()-3);
//	}
//	
//	for(int i=0;i<m;i++){
//		prev=0;
//		for(;;){
//			if((prev=tv[i].find("{{ ",prev))==(int)string::npos )
//				break;
//			if((next=tv[i].find(" }}",prev))==(int)string::npos )
//				break;
//			
//			key=tv[i].substr(prev+3,next-prev-3);
//			tv[i].replace(prev,next-prev+3,dict.count(key)?dict[key]:"");
//			prev+=dict.count(key)?dict[key].length():0;
//		}
//		cout<<tv[i]<<endl;
//	}
//	return 0;
//}


//201509-4 ���ٹ�·
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N=1e6+1;
////ͼ���ڽӱ�洢
////h��ʾÿ�����Ӧ������ͷ��idx��ʾ��ǰ���������µıߵı�� 
//int h[N],idx,cnt; 
//struct node{
//	int v;//��ʾ���������ӵĵ�ı��
//	int next;//��ʾ�Ӹõ��������һ���ߵı�ţ����Ϊ-1���ʾ�����Ѿ�����
//}edge[N];//edge�������ڴ洢ÿһ����
//void addEdge(int u,int v){
//	edge[++cnt].next=h[u];
//	edge[cnt].v=v;
//	h[u]=cnt;//�������߼���x����Ӧ��������������ͷ�����±ߵı��
//}
//
//int sum[N];
//int dfn[N],low[N];
//int stack[N],visit[N],tot;
//
//void tarjan(int x){
//	dfn[x]=low[x]= ++tot;
//	stack[++idx]=x;
//	visit[x]=1;
//	for(int i=h[x];i!=-1;i=edge[i].next){
//		if(!dfn[edge[i].v]){
//			tarjan(edge[i].v);
//			low[x]=min(low[x],low[edge[i].v]);
//		}else if(visit[edge[i].v]){
//			low[x]=min(low[x],dfn[edge[i].v]);
//		}
//	}
//	if(low[x]==dfn[x]){
//		do{
//			sum[x]++;
//			visit[stack[idx]]=0;
//			idx--;
//		}while(x!=stack[idx+1]);
//	}
//	return;
//}
//int main(){
//	memset(h,-1,sizeof h);
//	int n,m;
//	cin>>n>>m;
//	int x,y;
//	for(int i=1;i<=m;i++){
//		cin>>x>>y;
//		addEdge(x,y);
//	}
//	for(int i=1;i<=n;i++){
//		if(!dfn[i])
//			tarjan(i);
//	}
//	int ans=0;
//	for(int i=1;i<=n;i++){
//		if(sum[i]){
//			ans+=(sum[i]-1)*sum[i]/2;
//		}
//	}
//	cout<<ans;
//	return 0;
//}


//�������Ͻ�� 
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N=1e6+1;
//int h[N],cnt;
//struct node{
//	int v;
//	int next;
//}edge[N];
//void addEdge(int u,int v){
//	edge[++cnt].v=v;
//	edge[cnt].next=h[u];
//	h[u]=cnt;
//}
//int sum[N];
//int dfn[N],low[N];
//int stack[N],visit[N],cot,idx;
//void tarjan(int x){
//	dfn[x]=low[x]=++cot;
//	stack[++idx]=x;
//	visit[x]=1;
//	for(int i=h[x];i!=-1;i=edge[i].next){
//		if(!dfn[edge[i].v]){
//			tarjan(edge[i].v);
//			low[x]=min(low[x],low[edge[i].v]);
//		}else if(visit[edge[i].v]){
//			low[x]=min(low[x],dfn[edge[i].v]);
//		}
//	}
//	if(low[x]==dfn[x]){
//		do{
//			sum[x]++;
//			visit[stack[idx]]=0;
//			idx--;
//		}while(x!=stack[idx+1]);
//	}
//	return ;
//}
//int main(){
//	memset(h,-1,sizeof(h));
//	int n,m;
//	cin>>n>>m;
//	int x,y;
//	for(int i=1;i<=m;i++){
//		cin>>x>>y;
//		addEdge(x,y);
//	}
//	for(int i=1;i<=n;i++){
//		if(!dfn[i])
//			tarjan(i);
//	}
//	int ans=0;
//	for(int i=1;i<=n;i++){
//		if(sum[i]){
//			ans+=(sum[i]-1)*sum[i]/2;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N=1e6+1;
//int h[N],cnt;
//struct node{
//	int v;
//	int next;
//}edge[N];
//void addEdge(int u,int v){
////	edge[++cnt]=h[u];
////	edge[cnt].v=v;
////	h[u]=x;
//	edge[++cnt].v=v;
//	edge[cnt].next=h[u];
//	h[u]=cnt;
//}
//
//int sum[N],stack[N],visit[N],dfn[N],low[N],cot,idx;
//void tarjan(int x){
//	dfn[x]=low[x]=++cot;
//	stack[++idx]=x;
//	visit[x]=1;
//	for(int i=h[x];i!=-1;i=edge[i].next){
//		if(!dfn[edge[i].v]){
//			tarjan(edge[i].v);
////			low[edge[i].v]=min(low[x],dfn[edge[i].v]);
//			low[x]=min(low[x],low[edge[i].v]);
//		}else if(visit[edge[i].v]){
////			low[edge[i].v]=min(low[x],low[edge[i].v]);
//			low[x]=min(low[x],dfn[edge[i].v]);
//		}
//		
//		}
//		if(low[x]==dfn[x]){
//			do{
//				sum[x]++;
//				visit[stack[idx]]=0;
//				idx--;
//			}while(x!=stack[idx+1]);
//	}
//	return;
//}
//
//int main(){
//	memset(h,-1,sizeof(h));
//	int n,m;
//	cin>>n>>m;
//	int x,y;
//	for(int i=1;i<=m;i++){
//		cin>>x>>y;
//		addEdge(x,y);
//	}
//	for(int i=1;i<=n;i++){
//		if(!dfn[i])
//			tarjan(i);
//	}
//	int ans=0;
//	for(int i=1;i<=n;i++){
//		if(sum[i]){
//			ans+=(sum[i]-1)*sum[i]/2;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//} 



//201512-1 ��λ֮��
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int main(){
//	string a;
//	cin>>a;
//	int res=0;
//	for(int i=0;i<a.size();i++){
//		res+=a[i]-'0';
//	}
//	cout<<res;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main(){
//    string s;
//    cin>>s;
//    int res=0;
//    for(int i=0;i<s.length();i++){
//        res+=s[i]-'0';
//    }
//    cout<<res;
//    return 0;
//}
////201512-1 ��λ֮��
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string s;
//	cin>>s;
//	int sum=0;
//	for(int i=0;i<s.length();i++){
//		sum+=(s[i]-'0');
//	}
//	cout<<sum<<endl;
//	return 0; 
//} 


//201512-2 ��������Ϸ
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//const int N=35;
//int n,m;
//int a[N][N];
//bool b[N][N];
//int main(){
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			int z=j,y=j,s=i,x=i;
//			while(z>=0&&a[i][z]==a[i][j]) z--;
//			while(y<m&&a[i][y]==a[i][j]) y++;
//			while(s>=0&&a[s][j]==a[i][j]) s--;
//			while(x<n&&a[x][j]==a[i][j]) x++;
//			if(y-z >=4 || x-s >= 4) b[i][j] =true;
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(!b[i][j]) cout<<a[i][j]<<" ";
//			else cout<<0<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int a[35][35];
//bool b[35][35];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			int s=i,x=i,z=j,y=j;
//			while(s>=0 && a[s][j]==a[i][j]) s--;
//			while(x<n  && a[x][j]==a[i][j]) x++;
//			while(z>=0 && a[i][z]==a[i][j]) z--;
//			while(y<m  && a[i][y]==a[i][j]) y++;
//		if(x-s>=4 ||(y-z)>=4) b[i][j]=true;
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(b[i][j]){
//				cout<<0<<" ";
//			}else{
//				cout<<a[i][j]<<" ";
//			}
//
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int N=35;
//int a[N][N];
//bool b[N][N];
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			int s=i,x=i,z=j,y=j;
//			while(s>=0 && a[s][j]==a[i][j]) s--;
//			while(x<n  && a[x][j]==a[i][j]) x++;
//			while(z>=0 && a[i][z]==a[i][j]) z--;
//			while(y<m  && a[i][y]==a[i][j]) y++;
//		if(x-s>=4 || (y-z)>=4 ) b[i][j]=true;
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			if(b[i][j]){
//				cout<<0<<" ";
//			}else{
//				cout<<a[i][j]<<" ";
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}



//201512-3 ��ͼ
//#include<iostream>
//#include<cstring>
//#include<algorithm>
////#include<unordered_map>
//#include<vector>
//using namespace std;
//const int N=110;
//int m,n,q;
//char g[N][N];
//int dx[4]={-1,1,0,0};
//int dy[4]={0,0,-1,1};
//bool st[N][N];
//void changPoint(int &x,int &y){
//	int t=y;
//	y=x;
//	x=n-t-1;
//}
//void dfs(int x,int y,char c){
//	st[x][y]=true;
//	g[x][y]=c;
//	for(int i=0;i<4;i++){
//		int a=x+dx[i], b=y+dy[i];
//		if(a<0||a==n||b<0||b==m||st[a][b]) continue;
//		if(g[a][b]=='-'||g[a][b]=='|'||g[a][b]=='+') continue;
//		dfs(a,b,c);
//	}
//}
//int main(){
//	cin>>m>>n>>q;
//	memset(g,'.',sizeof(g));
//	while(q--){
//		int op;
//		cin>>op;
//		if(op==0){
//			int x1,y1,x2,y2;
//			cin>>x1>>y1>>x2>>y2;
//			changPoint(x1,y1);
//			changPoint(x2,y2);
//			if(x1==x2){
//				for(int j=min(y1,y2);j<=max(y1,y2);j++){
//					if(g[x1][j]=='|'||g[x1][j]=='+') g[x1][j]='+';
//					else g[x1][j]='-';
//				}
//			}
//			else{
//				for(int i=min(x1,x2);i<=max(x1,x2);i++){
//					if(g[i][y1]=='-'||g[i][y1]=='+') g[i][y1]='+';
//					else g[i][y1]='|';
//				}
//			}
//		}
//		else {
//			int x,y;
//			char c;
//			cin>>x>>y>>c;
//			changPoint(x,y);
//			memset(st,false,sizeof(st));
//			dfs(x,y,c);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<g[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N=110;
//int m,n,q;
//char g[N][N];
//bool st[N][N];
//int dx[4]={-1,1,0,0};
//int dy[4]={0,0,-1,1};
//
//void changePoint(int &x, int &y){
//	int t=y;
//	y=x;
//	x=n-t-1;
//}
//
//void dfs(int x,int y,char c){
//	st[x][y]=true;
//	g[x][y]=c;
//	for(int i=0;i<4;i++){
//		int a=x+dx[i],b=y+dy[i];
//		if(a<0 || a==n || b<0 || b==m || st[a][b]) continue;
//		if(g[a][b]=='-'|| g[a][b]=='|'|| g[a][b]=='+') continue;
//		dfs(a,b,c);
//	}
//}
//
//int main(){
//	cin>>m>>n>>q;
//	memset(g,'.',sizeof(g));
//	while(q--){
//		int op;
//		cin>>op;
//		if(op==0){
//			int x1,y1,x2,y2;
//			cin>>x1>>y1>>x2>>y2;
//			changePoint(x1,y1);
//			changePoint(x2,y2);
//			if(x1==x2){
//				for(int j=min(y1,y2);j<=max(y1,y2);j++){
//					if(g[x1][j]=='|'||g[x1][j]=='+') g[x1][j]='+';
//					else g[x1][j]='-';
//				}
//			}else{
//				for(int i=min(x1,x2);i<=max(x1,x2);i++){
////					if(g[i][y1]=='|'||g[i][y1]=='+') g[i][y1]='+';
//					if(g[i][y1]=='-'||g[i][y1]=='+') g[i][y1]='+';
//					else g[i][y1]='|';
//				}
//			}
//		}else{
//			int x,y;
//			char c;
//			cin>>x>>y>>c;
//			changePoint(x,y);
//			memset(st,false,sizeof(st));
//			dfs(x,y,c);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<g[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N=110;
//int m,n,q;
//void changePoint(int &x,int &y){
//	int t=y;
//	y=x;
//	x=n-t-1;
//}
//char g[N][N];
//bool st[N][N];
//int dx[4]={-1,1,0,0};
//int dy[4]={0,0,-1,1};
//
//
//void dfs(int x,int y,char c){
//	st[x][y]=true;
//	g[x][y]=c;
//	for(int i=0;i<4;i++){
//		int a=x+dx[i],b=y+dy[i];
//		if(a<0 || a>=n || b<0 || b>=m || st[a][b]) continue;
//		if(g[a][b]=='-' || g[a][b]=='|' || g[a][b]=='+') continue;
//		dfs(a,b,c);
//	}
//}
//
//
//
//int main(){
//	cin>>m>>n>>q;
//	memset(g,'.',sizeof(g));
//	while(q--){
//		int op;
//		cin>>op;
//		if(op==0){
//			int x1,y1,x2,y2;
//			cin>>x1>>y1>>x2>>y2;
//			changePoint(x1,y1);
//			changePoint(x2,y2);
//			if(x1==x2){
//				for(int j=min(y1,y2);j<=max(y1,y2);j++){
//					if(g[x1][j]=='|' || g[x1][j]=='+') g[x1][j]='+';
//					else g[x1][j]='-';
//				}
//			}else{
//				for(int i=min(x1,x2);i<=max(x1,x2);i++){
//					if(g[i][y1]=='-' || g[i][y1]=='+') g[i][y1]='+';
//					else g[i][y1]='|';
//				}	
//			}
//		}else{
//			int x,y;
//			char c;
//			cin>>x>>y>>c;
//			changePoint(x,y);
//			memset(st,false,sizeof(st));
//			dfs(x,y,c);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<g[i][j];
//		}
//		cout<<endl;
//	}
//	return 0;
//} 

//201512-4 �ͻ�
//#include<bits/stdc++.h>
//using namespace std;
//const int N = 10010, M = 100010;
//int n, m;
//// ����û���ر�,��set����ͼ�����������multiset
//// 
//set<int> g[N];
//int p[N];
//int ans[M], top;
//
//int find(int x){
//    if(x != p[x]) p[x] = find(p[x]);
//    return p[x];
//}
//
//
//void dfs(int u){
//    // set�Ǵ�С��������ģ����Ӷ���logm
//    while(g[u].size()){
//        int t = *g[u].begin();
//        g[u].erase(t), g[t].erase(u);
//        dfs(t);
//    }
//    // ���ݵ�ʱ�򽫵��¼����
//    ans[ ++ top] = u;
//}
//int main(){
//    cin >> n >> m;
//    for(int i = 1 ;i <= n; i ++) p[i] = i;
//    while( m --){
//        int a, b;
//        cin >> a >> b;
//        g[a].insert(b), g[b].insert(a); // set�Ĳ���insert
//        p[find(a)] = find(b);
//    }
//    
//    int s = 0; // ͳ�ƶ���Ϊ�����ĵ�ĸ���
//    for(int i = 1; i <= n; i ++){
//        if(find(i) != find(1)){
//            puts("-1");
//            return 0;
//        }
//        else if(g[i].size() & 1)  s ++;
//    }
//    
//    if(s != 0 && s != 2 || s == 2 && g[1].size() % 2 == 0){
//        puts("-1");
//        return 0;
//    }
//    
//    dfs(1);
//    for(int i = top; i; i --) printf("%d ", ans[i]);
//    
//}


//201512-4 �ͻ�
//#include<iostream>
//#include<set>
//using namespace std;
//const int N=10010,M=100010;
//set<int> g[N];
//int p[N];
//int find(int x){
//	if(x!=p[x]){
//		p[x]=find(p[x]);//ѹ��·�� 
//	}
//	return p[x]; 
//}
//int ans[M],top;
//void dfs(int u){
//	while(g[u].size()){
//		int t=*g[u].begin();
//		g[u].erase(t),g[t].erase(u);
//		dfs(t);
//	}
//	ans[++top]=u;
//}
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++) p[i]=i;
//	while(m--){
//		int a,b;
//		cin>>a>>b;
//		g[a].insert(b),g[b].insert(a);
//		p[find(a)]=find(b);
//	}
//	int s=0;
//	for(int i=1;i<=n;i++){
//		if(find(i)!=find(1)){
//			puts("-1");
//			return 0;
//		}
//		else if(g[i].size() & 1) s++;
//	}
//	if(s!=0 && s!=2 || s==2 && g[1].size() % 2==0){
//		puts("-1");
//		return 0;
//	}
//	dfs(1);
//	for(int i=top;i;i--){
//		cout<<ans[i]<<" ";
//	}
//	return 0;
//}

#include<iostream>
#include<set>
using namespace std;
const int N=10010,M=100010;
int p[N];
set<int> g[N];
int find(int x){
	if(x!=p[x]){
		p[x]=find(p[x]);//ѹ��·�� 
	}
	return p[x]; 
}
int ans[M],top;
void dfs(int u){
	while(g[u].size()){
		int t=*g[u].begin();
		g[u].erase(t),g[t].erase(u);
		dfs(t);
	}
	ans[++top]=u;
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) p[i]=i;
	while(m--){
		int a,b;
		cin>>a>>b;
		g[a].insert(b),g[b].insert(a);
		p[find(a)]=find(b);
	}
	
	int s=0;
	for(int i=1;i<=n;i++){
		if(find(i)!=find(1)){
			puts("-1");
			return 0;
		}
		else if(g[i].size() & 1) s++;
	}
	
	if(s!=0 && s!=2 || s==2 && g[1].size()%2==0){
		puts("-1");
		return 0;
	}
	
	dfs(1);
	if(top<n){
		puts("-1");
		return 0;
	}
	for(int i=top;i;i--){
		cout<<ans[i]<<" ";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

const int N = 10010, M = 100010;

int n, m;
// �洢ͼ���ڽӱ���setʵ��
set<int> g[N];
// ���鼯����ʹ�����
int p[N];
int ans[M], top;


// ���鼯���Һ����������ж�ͼ�Ƿ���ͨ
int find(int x){
    if(x != p[x]) p[x] = find(p[x]);
    return p[x];
}

// dfs���������ڱ���ŷ����·
void dfs(int u){
    // set�ĵ������Ǵ�С��������ģ����Ӷ�Ϊlogm
    // ɾ���ѱ����ıߣ�����������һ����
    while(g[u].size()){
        int t = *g[u].begin();
        g[u].erase(t), g[t].erase(u);
        dfs(t);
    }
    // ���ݵ�ʱ�򽫵��¼���������ݵĹ��̾��ǽ�ŷ����·����
    ans[ ++ top] = u;
}

int main(){
    // ��������
    cin >> n >> m;
    // ���鼯��ʼ��
    for(int i = 1 ;i <= n; i ++) p[i] = i;
    // �洢ͼ
    while( m --){
        int a, b;
        cin >> a >> b;
        g[a].insert(b), g[b].insert(a);
        // ����������ͨ����
        p[find(a)] = find(b);
    }
    
    // �ж�ͼ�Ƿ���ͨ
    int s = 0; // ͳ�ƶ���Ϊ�����ĵ�ĸ���
    for(int i = 1; i <= n; i ++){
        if(find(i) != find(1)){
            puts("-1");
            return 0;
        }
        else if(g[i].size() & 1)  s ++;
    }
    
    // �ж��Ƿ����ŷ����·
    if(s != 0 && s != 2 || s == 2 && g[1].size() % 2 == 0){
        puts("-1");
        return 0;
    }
    
    // �Ѿ��ҵ���ŷ����·�����Ϳ��Ա�������ŷ����·
    dfs(1);
    for(int i = top; i; i --) printf("%d ", ans[i]);
    // ���ŷ����·
}

